//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//int ans[1005];
//
//void init()
//{
//    cin >> n;
//}
//
//bool check()
//{
//    if (ans[1] != 1)
//        return false;
//    if (ans[n] != 0)
//        return false; 
//    for (int i = 1; i < n; i++)
//    {
//        if (ans[i] == 1 && ans[i + 1] == 1)
//            return false;
//    }
//
//    return true;
//}
//
//void display()
//{
//    for (int i = 1; i <= n; i++)
//    {
//        if (ans[i] == 1)
//            cout << "H";
//        else
//            cout << "A";
//    } 
//    cout << endl;
//}
//
//void Try(int i)
//{
//    for (int j = 0; j <= 1; j++)
//    {
//        ans[i] = j;
//        if (i == n)
//        {
//            if (check())
//                display();           
//        }
//        else
//            Try(i + 1);
//    }
//} 
//
//void solve()
//{
//    init();
//    Try(1);
//}
//
//int main()
//{
//    int test;
//    cin >> test;
//    while(test--)
//    {
//        solve();
//       //cout << endl;
//    }
//    return 0;
//}


#include<bits/stdc++.h>

using namespace std;

int n, a[1000], ok;

bool check(){
	if(a[1]!=1) return false;
	if(a[n]!=0) return false;
	for(int i=1; i<n; i++){
		if(a[i]==1 && a[i+1]==1) return false;
	}
	return true;
}

void khoitao(){
	for(int i=1; i<=n; i++){
		a[i]=0;
	}
}

void sinh(){
	int i=n;
	while(a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0) ok=1;
	else a[i]=1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ok=0;
		khoitao();
		while(ok==0){
			if(check()){
				for(int i=1; i<=n; i++){
					if(a[i]==1) cout << "H";
					else cout << "A";
				}
				cout << endl;
			}
			sinh();
		}
		cout << endl;
	}
	return 0;
}

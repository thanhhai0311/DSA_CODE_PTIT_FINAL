//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		int n, k;
//		cin >> n >> k;
//		int a[k];
//		for(int j=1; j<=k; j++){
//			cin >> a[j];
//		}
//		int i=k;
//		int ans=0;
//		while(i>0 && a[i]==n-k+i){
//			i--;
//		}
//		if(i==0) ans=k;
//		else ans=k-i;
//		cout << ans << endl;
//	}
//	return 0;
//}



#include<bits/stdc++.h>
using namespace std;

int n,k,a[100];
void next(){
	set < int > se;
	for(int i=1;i<=k;i++){
		se.insert(a[i]);
	}
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		i--;
	}
	if( i==0){
		cout<<k<<endl;
	}else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
		for(int i=1;i<=k;i++){
			se.insert(a[i]);
		}
		cout<<se.size()-k<<endl;
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=k;i++){
			cin>>a[i];
		}
		next();
	}
}



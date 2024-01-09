//#include<bits/stdc++.h>
//
//using namespace std;
//
//bool check(string s){
//	long long tong=0;
//	for(auto x : s){
//		tong+=x;
//	}
//	if(tong%3==0) return true;
//	return false;
//}
//
//bool check2(string s, char c){
//	for(auto x : s){
//		if(x==c) return false;
//	}
//	return true;
//}
//
//string solve(int n, char a[]){
//	queue<string> q;
//	sort(a, a+n);
//	set<string> se;
//	for(int i=0; i<n; i++){
//		q.push(string(1, a[i]));
//		se.insert(string(1, a[i]));
//	}
//	while(!q.empty()){
//		string tmp=q.front();
//		q.pop();
//		for(int i=0; i<n; i++){
//			if(check2(tmp, a[i])){
//				char o1=a[i];
//				string res=tmp+o1;
//				q.push(res);
//				se.insert(res);
//			}
//		}
//	}
//	vector<string> v;
//	for(auto x : se){
//		v.push_back(x);
//	}	
//	reverse(v.begin(), v.end());
//	for(auto x : v){
//		if(check(x)){
//			return x;
//		}
//	}
//	return to_string(-1);
//}
//
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		int n;
//		cin >> n;
//		char a[n];
//		for(int i=0; i<n; i++){
//			cin >> a[i];
//		}
//		cout << solve(n, a) << endl;
//	}
//}


#include<bits/stdc++.h>

using namespace std;

bool check[10000];

int main(){
	int t; 
	cin >> t;
	while(t--){
		int n, M[100000];
		cin >> n; 
		for(int i=0; i<n; i++){
			cin >> M[i];
		}
		int N[10]={0};
		int sum=0;
		for(int i=0; i<n; i++){
			N[M[i]]++; 
			sum += M[i];
		}
		bool check=false;
		if(sum%3==1){
			if(N[1]>0){
				N[1]--; 
				check = true;
			}
			else if(N[4]>0){
				N[4]--; 
				check = true;
			}
			else if(N[7]>0){
				N[4]--;
				check = true;	
			}
		}
		else if(sum%3==2){
			if(N[2]>0){
				N[2]--; 
				check = true;
			}
			else if(N[5]>0){
				N[5]--;
				check = true;
			}
			else if(N[8]>0){
				N[8]--;
				check = true;	
			}
		}
		else check=true;
		if(!check){
			cout << -1 << endl; 
			continue;
		}
		int k=10, ok=1;
		while(k--){
			while(N[k]--){
				cout << k;
				ok = 0;
			}
		}
		if(ok) cout << -1;
		cout << endl;
	}
	return 0;
}

//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//	long long t;
//	cin >> t;
//	while(t--){
//		long long  n, m, k;
//		cin >> n >> m >> k;
//		multiset<long long> sa;
//		multiset<long long> sb;
//		multiset<long long> sc;
//		multiset<long long> s;
//		for(long long i=0; i<n; i++){
//			int x;
//			cin >> x;
//			sa.insert(x);
//		}
//		for(long long i=0; i<m; i++){
//			int x;
//			cin >> x;
//			sb.insert(x);
//		}
//		for(long long i=0; i<k; i++){
//			int x;
//			cin >> x;
//			sc.insert(x);
//		}
//		for(auto x : sa){
//			if(sb.count(x)>0 && sc.count(x)>0){
//				s.insert(x);
//			}
//		}
//		if(s.size()!=0){
//			for(auto x : s){
//				cout << x << " ";
//			}
//			cout << endl;
//		}
//		else cout << "-1" << endl;
//	}
//	return 0;
//}


#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, k;
		cin >> n >> m >> k;
		long long a[n], b[m], c[k];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i<m; i++){
			cin >> b[i];
		}
		for(int i=0; i<k; i++){
			cin >> c[i];
		}
		vector<long long> v;
		int i=0, j=0, l=0;
		while(i<n && j<m && l<k){
			if(a[i]==b[j] && b[j]==c[l]){
				v.push_back(a[i]);
				i++; j++; l++;
			}
			else if(a[i]<=b[j] && a[i]<=c[l]) i++;
			else if(b[j]<=a[i] && b[j]<=c[l]) j++;
			else l++;
		}
		if(v.size()==0){
			cout << "NO" << endl;
		}
		else{
			for(auto x : v){
				cout << x << " ";
			}
			cout << endl;
		}
	}
	return 0;
}

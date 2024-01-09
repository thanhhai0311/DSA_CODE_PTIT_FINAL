#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		//int dem=0;
		multiset<int> ms;
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0){
				while(n%i==0){
					n/=i;
					ms.insert(i);
				}
			}
		}
		if(n>1) ms.insert(n);
		set<int> s;
		for(auto x : ms){
			//cout << x << " ";
			s.insert(x);
		}
		if(s.size()==ms.size() && s.size()==3) cout << "1" << endl;			else cout << "0" << endl;
	}	
	return 0;
}

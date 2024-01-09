#include<bits/stdc++.h>

using namespace std;

void benhat(int m, int s){
	s--;
	vector<int> v(m);
	for(int i=m-1; i>0; i--){
		if(s>9){
			v[i]=9;
			s-=9;
		}else{
			v[i]=s;
			s=0;
		}
	}
	v[0]=s+1;
	for(int x : v){
		cout << x;
	}
}

void lonnhat(int m, int s){
	vector<int> v(m);
	for(int i=0; i<m; i++){
		if(s>9){
			v[i]=9;
			s-=9;
		}else{
			v[i]=s;
			s=0;
		}
	}
	for(auto x : v){
		cout << x;
	}
}

int main(){
	int m, s;
	cin >> m >> s;
	if(s > m*9 || s == 0 && m >= 1) cout << "-1 -1";
	else{
		benhat(m, s);
		cout << " ";
		lonnhat(m, s);
	}
	return 0;
}



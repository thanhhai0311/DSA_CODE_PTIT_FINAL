#include<bits/stdc++.h>

using namespace std;

int main(){
	//int t;
	//cin >> t;
	//while(t--){
		string a, b, c, d;
		cin >> a >> b;
		c=a; d=b;
		for(int i=0; i<a.size(); i++){
			if(a[i]=='6') a[i]='5';
		}
		for(int i=0; i<a.size(); i++){
			if(b[i]=='6') b[i]='5';
		}
		cout << stoll(a)+stoll(b) << " ";
		for(int i=0; i<c.size(); i++){
			if(c[i]=='5') c[i]='6';
		}
		for(int i=0; i<d.size(); i++){
			if(d[i]=='5') d[i]='6';
		}
		cout << stoll(c)+stoll(d) << " ";
		//cout << endl;
	//}
}

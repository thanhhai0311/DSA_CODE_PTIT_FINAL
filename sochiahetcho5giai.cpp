#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		string s;
		cin >> s;
		long long du=0;
		int n=s.size();
		if(s[n-1]=='1') du=1;
		for(int i=n-2; i>=0; i--){
			if(s[i]=='1'){
				if((n-i-1)%4==1) du+=2;
				if((n-i-1)%4==2) du+=4;
				if((n-i-1)%4==3) du+=3;
				if((n-i-1)%4==0) du+=1;
			}	
		}
		if(du%5==0) cout << "Yes" << endl;
		if(du%5!=0) cout << "No" << endl;
	}
	return 0;
}

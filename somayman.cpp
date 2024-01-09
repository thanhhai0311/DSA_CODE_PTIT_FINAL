#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ok=0;
		for(int i=n/7; i>=0; i--){
			int tmp=n-7*i;
			if(tmp%4==0){
				ok=1;
				int s4=tmp/4;
				for(int j=0; j<s4; j++){
					cout << "4";
				}
				for(int k=0; k<i; k++){
					cout << "7";
				}
				if(ok==1) continue;
			}
		}
		if(ok==1) cout << endl;
		if(ok==0) cout << "-1" << endl;;
	}
}

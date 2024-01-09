#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
		int a, m;
		cin >> a >> m;
		int kq=0;
		for(int j=0; j<=m-1; j++){
			if((a*j)%m==1){
				cout << j;
				kq=1;
				break;
			}
		}
		if(kq==0) cout << "-1" << endl;
		else cout << endl;
	}
}

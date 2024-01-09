#include<bits/stdc++.h>

using namespace std;
int F[1005][1005];

int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		int dem=0;
		int i=0, j=0;
		int l1=s1.size(), l2=s2.size();
		for(int i=0; i<=l1; i++){
			for(int j=0; j<=l2; j++){
				F[i][j]=0;
			}
		}
		for(int i=0; i<=l1; i++){
			for(int j=0; j<=l2; j++){
				if(i==0 || j==0){
					F[i][j]=0;
				}
				else{
					if(s1[i-1]==s2[j-1]){
						F[i][j]=F[i-1][j-1]+1;
					}
					else{
						F[i][j]=max(F[i-1][j], F[i][j-1]);
					}
				}
			}
		}
		cout << F[l1][l2] << endl;
	}
}

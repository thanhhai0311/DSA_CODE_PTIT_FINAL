#include<bits/stdc++.h>
using namespace std;
int cnt[101]={0};
int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		//cin.ignore();
		string s;
		getline(cin,s);
		memset(cnt,0,sizeof(cnt));
		for( int i=0; i<s.size();i++){
			cnt[s[i]]++;
		}
		for(int i=0; i<s.size();i++){
			if( cnt[s[i]] >0){
				cout<<s[i]<<cnt[s[i]];
				cnt[s[i]]=0;//den ptu giong nhau tiep theo thi k in lap
			}
		}
		cout<<endl;
	}
}

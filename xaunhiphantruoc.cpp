//#include<bits/stdc++.h>
//
//using namespace std;
//
//int n, a[100], ok;
//
//string s;
//
//void ktao(){
//	for(int i=1; i<=n; i++){
//		a[i]=0;
//	}
//}
//
//void sinh(){
//	int i=s.size()-1;
//	while(s[i]=='0'){
//		s[i]='1';
//		i--;
//	}
//	if(i<0) ok=0;
//	else s[i]='1';
//}
//
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		//string s;
//		cin >> s;
//		sinh();
//		for(int i=0; i<n; i++){
//			cout << s[i];
//		}
//		cout << endl;
//	}
//	return 0;
//}
//


#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n=s.size()-1;
		int i=n;
		while(s[i]=='0'){
			s[i]='1';
			i--;
		}
		s[i]='0';
		for(int i=0; i<=n; i++){
			cout << s[i];
		}
		cout << endl;
	}
}

//#include<bits/stdc++.h>
//
//using namespace std;
//
//void truoc ( string s){
//	int i=s.length() -1;
//	while(i >=0 && s[i]=='0'){
//		s[i]='1';
//		i--;
//	}
//	if( i==-1){
//		for(int i=1;i<=s.length();i++){
//			cout<<1;
//		}
//		cout<<endl;
//	}else{
//		s[i]='0';
//		cout<<s<<endl;
//	}
//}
//
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		string s;
//		cin>>s;
//		truoc(s);
//	}
//}


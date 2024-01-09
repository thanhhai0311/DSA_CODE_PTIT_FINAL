#include<bits/stdc++.h>

using namespace std;

int main(){
//	int n;
//	cin >> n;
//	cin.ignore();
//	string s;
//	getline(cin, s);
//	cout << s.size();
//	string a="Nguyen";
//	string b="Thanh";
//	string c="Hai";
//	string d=a+b+c;
//	cout << d << endl;
//	cout << a.compare(b) << endl;
//	cout << a.substr(1, 3);
//	string s= "12345678998";
//	long long a=stoll(s);
//	cout << a << endl;
//	return 0;
//	int a=123456;
//	string s=to_string(a);
//	cout << s << endl;
	string s;
	cin >> s;
	getline(cin, s);
	stringstream ss(s);
	string tmp;
	int dem=0;
	while(ss >> tmp){
		cout << tmp << endl;
		dem++;
	}
	cout << dem << endl;
}

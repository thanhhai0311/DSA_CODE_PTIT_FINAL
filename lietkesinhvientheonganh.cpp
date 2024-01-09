#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string msv;
	string hoten;
	string lop;
	string email;
};

int main(){
	int n;
	cin >> n;
	struct SinhVien a[n];
	for(int i=0; i<n; i++){
		cin >> a[i].msv;
		cin.ignore();
		getline(cin, a[i].hoten);
		cin >> a[i].lop >> a[i].email;
	}
	int t;
	cin >> t;
	cin.ignore();
	for(int j=0; j<t; j++){
		string s;
		getline(cin, s);
		for(int i=0; i<s.size(); i++){
			if(s[i]>='a' && s[i]<='z') s[i]-=32;
		}
		cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;
		for(int i=0; i<n; i++){
			if(a[i].lop[0]=='E' && (a[i].msv[5]=='A' || a[i].msv[5]=='C')) continue;
			if(a[i].msv[5]==s[0]) cout << a[i].msv << " " << a[i].hoten << " " << a[i].lop << " " << a[i].email << endl;
		}
	}
	return 0;
}

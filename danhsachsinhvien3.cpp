#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string ten, lop, ns, ma;
	float diem;
};

void chuanhoa(string &s){
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	for(int i=0; i<v.size(); i++){
		v[i][0]=toupper(v[i][0]);
		for(int j=1; j<v[i].size(); j++){
			v[i][j]=tolower(v[i][j]);
		}
	}
	for(auto x : v){
		cout << x << " ";
	}
}

void nhap(SinhVien a[], int n){
	for(int i=0; i<n; i++){
		cin.ignore();
		getline(cin, a[i].ten);
		cin >> a[i].lop >> a[i].ns >> a[i].diem;
		if(i<9) a[i].ma="B20DCCN00";
		else a[i].ma="B20DCCN0";
		a[i].ma+=to_string(i+1);
	}
}

void in(SinhVien a[], int n){
	for(int i=0; i<n; i++){
		cout << a[i].ma << " ";
		chuanhoa(a[i].ten);
		cout << a[i].lop << " ";
		if(a[i].ns[1]=='/') a[i].ns.insert(0, 1, '0');
		if(a[i].ns[4]=='/') a[i].ns.insert(3, 1, '0');
		cout << a[i].ns << " ";
		cout << fixed << setprecision(2) << a[i].diem;
		cout << endl;
	}
}

bool tmp(SinhVien a, SinhVien b){
	return a.diem>b.diem;
}

void sapxep(SinhVien a[], int n){
	sort(a, a+n, tmp);
}

int main(){
	struct SinhVien ds[50];
	int N;
	cin >> N;
	nhap(ds, N);
	sapxep(ds, N);
	in(ds, N);
	return 0;
}

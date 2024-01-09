#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
	string name;
	string gt;
	string birthday;
	string dc;
	string mnv;
	string day;
};

void nhap(struct NhanVien &a){
	cin.ignore();
	getline(cin, a.name);
	cin >> a.gt;
	cin >> a.birthday;
	cin.ignore();
	getline(cin, a.dc);
	cin >> a.mnv;
	cin >> a.day;
}

void inds(struct NhanVien ds[], int n){
	for(int i=0; i<n; i++){
		cout << setfill('0') << setw(5) << i+1;
		cout << " " << ds[i].name << " " << ds[i].gt << " " << ds[i].birthday;
		cout << " " << ds[i].dc << " " << ds[i].mnv << " " << ds[i].day;
		cout << endl;
	}
}

int main(){
	struct NhanVien ds[50];
	int N,i;
	cin >> N;
	for(int i=0; i<N; i++) nhap(ds[i]);
	inds(ds, N);
	return 0;
}

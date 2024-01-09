#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string ma, ten, lop, email;
};

bool cmp(SinhVien a, SinhVien b){
	return a.ma<b.ma;
}

//void sapxep(SinhVien a[], int n){
//	sort(a, a+n, cmp);
//}

int main(){
	int n;
	cin >> n;
	struct SinhVien ds[50];
	for(int i=0; i<n; i++){
		cin >> ds[i].ma;
		cin.ignore();
		getline(cin, ds[i].ten);
		cin >> ds[i].lop >> ds[i].email;
	}
	sort(ds, ds+n, cmp);
	for(int i=0; i<n; i++){
		cout << ds[i].ma << " " << ds[i].ten << " " << ds[i].lop << " " << ds[i].email;
		cout << endl;
	}
	return 0;
}


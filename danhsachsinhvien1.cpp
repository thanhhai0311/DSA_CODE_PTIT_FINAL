#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string ten, lop, ns;
	float diem;
};

void nhap(SinhVien a[], int n){
	for(int i=0; i<n; i++){
		cin.ignore();
		getline(cin, a[i].ten);
		cin >> a[i].lop >> a[i].ns >> a[i].diem;
	}
}

void in(SinhVien a[], int n){
	for(int i=0; i<n; i++){
		if(i<9) cout << "B20DCCN00";
		else cout << "B20DCCN0";
		cout << i+1 << " " << a[i].ten << " " << a[i].lop;
		if(a[i].ns[1]=='/') a[i].ns.insert(0, 1, '0');
		if(a[i].ns[4]=='/') a[i].ns.insert(3, 1, '0');
		cout << " " << a[i].ns << " ";
		cout << fixed << setprecision(2) << a[i].diem;
		cout << endl;
	}
}
//02/3/2002
int main(){
	struct SinhVien ds[50];
	int N;
	cin >> N;
	nhap(ds, N);
	in(ds, N);
	return 0;
}

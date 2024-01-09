#include<bits/stdc++.h>

using namespace std;

struct MatHang{
	int ma;
	string ten, nhom;
	float gm, gb, loi;
};

void nhap(MatHang a[], int n){
	for(int i=0; i<n; i++){
		a[i].ma=i+1;
		cin.ignore();
		getline(cin, a[i].ten);
		getline(cin, a[i].nhom);
		cin >> a[i].gm >> a[i].gb;
		a[i].loi=a[i].gb-a[i].gm;
	}
}

void in(MatHang a[], int n){
	for(int i=0; i<n; i++){
		cout << a[i].ma << " " << a[i].ten << " " << a[i].nhom << " ";
		cout << fixed << setprecision(2) << a[i].loi;
		cout << endl; 
	}
}

bool tmp(MatHang a, MatHang b){
	return a.loi>b.loi;
}

void sapxep(MatHang a[], int n){
	sort(a, a+n, tmp);
}

int main(){
	MatHang ds[100];
	int n;
	cin >> n;
	nhap(ds, n);
	sapxep(ds, n);
	in(ds, n);
	return 0;
}

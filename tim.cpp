#include<bits/stdc++.h>

using namespace std;

int main(){
	cout << "Cau co thich to khong >.< ?" << endl;
	cout << "0. KHONG" << endl;
	cout << "1. CO. To thich cau lam do >.< " << endl;
	int n;
	cin >> n;
	while(n==0){
		cout << "Cau dung doi long nua :<" << endl;
		int a;
		cin >> a;
		n=a;
	}
	if(n==1){
		cout << "Hihi to cung thich cau lam" << endl;
		cout << "   ***** *****   " << endl;
		cout << "  *     *     *  " << endl;
		cout << "  *  iu Trang *  " << endl;
		cout << "    *        *   " << endl;
		cout << "        *        " << endl;
	}
	return 0;
}

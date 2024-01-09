#include<bits/stdc++.h>

using namespace std;

struct ThiSinh{
	string name;
	string birthday;
	double score1, score2, score3;
};

void nhap(ThiSinh &A){
	getline(cin, A.name);
	cin >> A.birthday;
	cin >> A.score1 >> A.score2 >> A.score3;
}

void in(ThiSinh &A){
	cout << A.name << " " << A.birthday;
	cout << " ";
	cout << fixed << setprecision(1) << A.score1+A.score2+A.score3;
}

int main(){
	ThiSinh A;
	nhap(A);
	in(A);
	return 0;
}

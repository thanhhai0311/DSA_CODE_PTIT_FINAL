#include<bits/stdc++.h>

using namespace std;

struct Point{
	double x, y;
};

void input(Point &x){
	cin >> x.x >> x.y;
}

double distance(Point A, Point B){
	return sqrt(((A.x-B.x)*(A.x-B.x))+((A.y-B.y)*(A.y-B.y)));
}
int main(){
	Point A, B;
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		input(A);
		input(B);
		cout << fixed << setprecision(4) << distance(A, B) << endl;	
	}
	return 0;
}

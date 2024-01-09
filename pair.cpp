#include<bits/stdc++.h>

using namespace std;

int main(){
//	pair<int, int> v = make_pair(100, 200);
//	cout << v.first << endl;
//	cout << v.second << endl;
//	tuple<int, int, int> v = make_tuple(100, 200, 300);
//	cout << get<0>(v) << endl;
	tuple<int, int, int> t{100, 200, 300};
	cout << get<0>(t) << endl;
	cout << get<2>(t) << endl;
}

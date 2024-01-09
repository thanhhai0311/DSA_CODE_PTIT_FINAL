#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	cout << v.size() << endl;
	cout << v[0] <<" " << v[1] <<" " << v[2] << endl; 
	for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
		cout << *it << endl;
	}
	return 0;
}

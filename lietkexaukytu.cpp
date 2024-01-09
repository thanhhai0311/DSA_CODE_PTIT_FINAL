#include<bits/stdc++.h>

using namespace std;

char c;
int n;
bool a[256];

void nhap(){
	cin >> c >> n;
}

void Try(int i, char d,string s){
	for(char j=d; j<=c; j++){
	//	if(a[j]==0){
			s+=j;
			//a[j]=1;
			if(i==n) cout << s << endl;
			else Try(i+1, j, s);
			s.pop_back();
		//	a[j]=0;
		//}
	}
}

int main(){
	nhap();
	Try(1, 'A', "");
}

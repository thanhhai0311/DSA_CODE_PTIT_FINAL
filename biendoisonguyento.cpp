#include<bits/stdc++.h>

using namespace std;

bool nto(int n){
	if(n<2) return false;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return true;
}

int solve(int s, int t){
	queue<pair<int, int>> q;
	q.push({s, 0});
	set<int> se;
	se.insert(s);
	while(!q.empty()){
		pair<int, int> top=q.front();
		q.pop();
		string tmp=to_string(top.first);
		if(top.first==t) return top.second;
		else{
			for(int i=0; i<4; i++){
				char a=tmp[i];
				for(auto x : {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'}){
					if(tmp[i]!=x){
						tmp[i]=x;
						int v=stoll(tmp);
						if(v>1000 && nto(v)){
							if(!se.count(v)){
								q.push({v, top.second+1});
								se.insert(v);
							}
						}
					}
				}	
				tmp[i]=a;
			}
		}
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		int s, t;
		cin >> s >> t;
		cout << solve(s, t) << endl;
	}	
}

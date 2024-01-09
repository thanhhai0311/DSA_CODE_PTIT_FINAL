//#include<bits/stdc++.h>
//
//using namespace std;
//int n, m;
//vector<int> Ke[1005];
//int color[1005];
//
//void nhap(){
//	cin >> n >> m;
//	for(int i=0; i<m; i++){
//		int x, y;
//		cin >> x >> y;
//		Ke[x].push_back(y);
//	}
//	memset(color, 0, sizeof(color));
//}
//
//bool DFS(int u){
//	color[u]=1;
//	for(auto x : Ke[u]){
//		if(color[x]==0){
//			if(DFS(x)) return true;
//		}
//		else if(color[x]==1) return true;
//	}
//	color[u]=2;
//	return false;
//}
//
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		nhap();
//		int ok=0;
//		for(int i=1; i<=n; i++){
//			if(color[i]==0){
//				if(DFS(i)){
//					cout << "YES" << endl;
//					ok=1;
//					break;
//				}
//			}
//		}
//		if(ok==0) cout << "NO" << endl;
//		for(int i=1; i<=n; i++){
//			Ke[i].clear();
//		}
//	}
//}

#include<bits/stdc++.h>

using namespace std;
int n, m;
vector<int> Ke[1005];
int color[1005];

void nhap(){
	cin >> n >>m;
	for(int i=0; i<m; i++){
		int x, y; 
		cin >> x >> y;
		Ke[x].push_back(y);
	}
	memset(color, 0, sizeof(color));
}

bool DFS(int u){
	color[u]=1;
	for(auto x : Ke[u]){
		if(color[x]==0){
			if(DFS(x)) return true; 
		}
		else if(color[x]==1) return true;
	}
	color[u]=2;
	return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		int ok=0;
		for(int i=1; i<=n; i++){
			if(color[i]==0){
				if(DFS(i)){
					cout << "YES" << endl;
					ok=1;
					break;
				}
			}
		}
		if(ok==0) cout << "NO" << endl;
		for(int i=1; i<=n; i++){
			Ke[i].clear();
		}
	}
}

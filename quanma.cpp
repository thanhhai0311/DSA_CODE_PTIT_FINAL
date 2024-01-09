#include<bits/stdc++.h>

using namespace std;

int s, t, u, v;
int visited[1005][1005];
int d[1005][1005];
int dx[8]={-1, -2, -2, -1, 1, 2, 2, 1};
int dy[8]={-2, -1, 1, 2, 2, 1, -1, -2};

int BFS(int i, int j){
	queue<pair<int, int>> q;
	q.push({i, j});
	d[i][j]=0;
	visited[i][j]=true;
	while(!q.empty()){
		pair<int, int> top=q.front();
		q.pop();
		int x=top.first;
		int y=top.second;
		if(x==u && y==v) return d[x][y];
		else{
			for(int k=0; k<8; k++){
				int x1=x+dx[k];
				int y1=y+dy[k];
				if(x1>0 && x1<=8 && y1>0 && y1<=8 && !visited[x1][y1]){
					q.push({x1, y1});
					d[x1][y1]=d[x][y]+1;
					visited[x1][y1]=true;
				}
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2; // s t u v
		s=s1[0]-'a'+1;
		t=8-(s1[1]-'0')+1;
		u=s2[0]-'a'+1;
		v=8-(s2[1]-'0')+1;
		memset(visited, false, sizeof(visited));
		memset(d, 0, sizeof(d));
		cout << BFS(s, t) << endl;
	}
}

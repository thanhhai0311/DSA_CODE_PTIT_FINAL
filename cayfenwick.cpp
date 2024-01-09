#include<bits/stdc++.h>

using namespace std;

int n;
int maxn=100005;
int a[maxn], BIT[maxn];

void update(int pos, int val){
	for( ;pos<=n; pos+=pos&(-pos)){
		BIT[pos]+=val;
	}
}

int query(int pos){
	int sum=0;
	for( ;pos>0; pos-=pos&(-pos)){
		sum+=BIT[pos];
	}
	return sum;
}

int main(){
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a[i];
		update(i, a[i]);
	}
	cout << query(5)-query(1) << endl; //tong tu phan tu thu 1 den phan tu thu 5	
}

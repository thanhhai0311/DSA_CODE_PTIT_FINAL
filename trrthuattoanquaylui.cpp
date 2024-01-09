// Quay lui xau nhi phan:

#include<bits/stdc++.h>

using namespace std;

int n, a[100];

void in(){
	for(int i=1; i<=n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void Try(int i){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==n){
			in();
		}
		else{
			Try(i+1);
		}
	}
}

int main(){
	cin >> n;
	Try(1);
	return 0;
}


// Quay lui to hop chap k:
#include<bits/stdc++.h>

using namespace std;

int n, k, a[100];

void in(){
	for(int i=1; i<=k; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void Try(int i){
	for(int j=a[i-1]+1; j<=n-k+i; j++){
		a[i]=j;
		if(i==k){
			in();
		}
		else{
			Try(i+1);
		}
	}
}

int main(){
	cin >> n >> k;
	Try(1);
	return 0;
}


// Quay lui hoan vi:
#include<bits/stdc++.h>

using namespace std;

int n, a[100], used[100];

void in(){
	for(int i=1; i<=n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void Try(int i){
	for(int j=1; j<=n; j++){
		if(used[j]==0){
			a[i]=j;
			used[j]=1;
			if(i==n){
				in();
			}
			else{
				Try(i+1);
			}
			used[j]=0;
		}
	}
}

int main(){
	cin >> n;
	memset(used, 0, sizeof(used));
	Try(1);
	return 0;
}

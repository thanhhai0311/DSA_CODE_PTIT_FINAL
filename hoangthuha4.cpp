#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,p;
	cin>>n>>m>>p;
	int a[n][m],b[m][p],c[n][p];
	for( int i=0; i<n;i++){
		for( int j=0; j<m;j++){
			cin>>a[i][j];
		}
	}
	for( int j=0; j<m;j++){
		for( int l=0; l<p;l++){
			cin>>b[j][l];
		}
	}
	for( int i=0; i<n;i++){
		for(int l=0; l<p;l++){
		    c[i][l]=0;
			for( int j=0;j<m;j++){
				c[i][l]+= a[i][j] * b[j][l];
			}
		}
	}
	for( int i=0;i<n;i++){
	    for( int l=0;l<p;l++){
	        cout<<c[i][l]<<" ";
	    }
	    cout<<endl;
	}
}

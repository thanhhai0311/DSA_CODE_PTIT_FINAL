#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int max=a[0];
    for(int i=0; i<n; i++){
        if(a[i]>max) max=a[i];
    }
    int b[100001];
    for(int i=0; i<=max; i++){
        b[i]=0;
    }
    for(int i=0; i<n; i++){
        b[a[i]]+=1;
    }
    for(int i=0; i<=max; i++){
    	cout << b[i] << " ";
	}
	cout << endl;
    for(int i=0; i<=max; i++){
        if(b[i]>=1){
            cout << i << " - " << b[i] << "; ";
        }
    }
    return 0;
}

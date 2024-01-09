#include<bits/stdc++.h>

using namespace std;

int n, k, m, a[100], ok;

void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}

void sinh(){
	// Bat dau tu bit cuoi cung
	int i = n;
	while(i >= 1 && a[i] == 1){ 
		a[i] = 0;
		--i;
	}
	if(i == 0){
		ok = 0; // cau hinh cuoi cung
	}
	else{
		a[i] = 1;
	}
}

bool check1(){
	int i = 1, cnt = 0, temp = 0;
	while(i <= n){
		while(a[i] == 0){
			i++;
		}
		temp = 0;
		while(a[i] == 1 && i <= n){
			temp++; i++;
		}
		if(temp == m) cnt++;
	}
	return cnt == 1;
}

bool check2(){
	int i = 1, cnt = 0, temp = 0;
	while(i <= n){
		while(a[i] == 1){
			i++;
		}
		temp = 0;
		while(a[i] == 0 && i <= n){
			temp++; i++;
		}
		if(temp == k) cnt++;
	}
	return cnt == 1;
}
int main(){
    cin >> n >> m >> k;
    ok = 1;
    ktao();
    while(ok){
    	if(check1() && check2()){
    	for(int i = 1; i <= n; i++){
    		cout << a[i];
    	    }
    	    cout << endl;
    	}
    	sinh();
	}
}
//Bai 3

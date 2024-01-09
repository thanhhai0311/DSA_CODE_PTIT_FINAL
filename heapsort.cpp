#include<bits/stdc++.h>

using namespace std;

void heapify(int a[], int N, int i){
	int m=i;
	int l=2*i+1;
	int r=2*i+2;
	if(l<N && a[l]>a[m]){
		m=l;
	}
	if(r<N && a[r]>a[m]){
		m=r;
	}
	if(m!=i){
		swap(&a[i], &a[l]);
		heapify(a, N, m);
	}
}

void heapSort(int a[], int N){
	for(int i=N/2-1; i>=0; i--){
		heapify(a, N, i);
	}
	for(int i=N-1; i>=0; i--){
		swap(&a[0], &a[i]);
		heapify(a, i, 0);
	}
}

int main(){
	
}

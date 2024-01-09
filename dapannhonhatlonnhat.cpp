#include<bits/stdc++.h> 

using namespace std; 

void sobe(int m, int s){ 
	int k=0; 
	int a[200];
	while (m--){ 
		if (k==0){ 
			if(s <= 9*m) 
			a[k] = 1; 
			else a[k] = s - 9*m; 
		} else if (s <= 9*m) a[k] = 0; 
		else a[k] = s - 9*m; 
		s -= a[k]; k++; 
	} 
	k--; 
	for (int i=0; i<=k; i++) 
		cout << a[i]; 
		cout << " "; 
} 

void solon(int m, int s){ 
	int k=0; int a[200]; 
	while (m--) { 
		if (s <= 9) { 
			a[k] = s; 
		} 
		else { 
			a[k] = 9; 
		} 
		s = s - a[k]; 
		k++; 
	} 
	for (int i=0; i<k; i++) 
	cout << a[i]; 
} 

int main () { 
	int m, s; 
	cin >> m >> s; 
	if (s < 1 || s > 9*m) { 
		cout << "-1 -1" ; 
		return 0; 
	} else { 
	sobe(m, s); 
	solon(m ,s); 
	} 
}

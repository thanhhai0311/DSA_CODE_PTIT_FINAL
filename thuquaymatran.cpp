#include<bits/stdc++.h>  

using namespace std; 
int main() { 
	int t; 
	cin >> t; 
	while (t--) { 
		int n, m; 
		cin >> n >> m; 
		int a[100][100]; 
		for (int i = 0; i < n; i++) { 
			for (int j = 0; j < m; j++) { 
				cin >> a[i][j]; 
			} 
		} 
		int tren = 0, duoi = n - 1, trai = 0, phai = m - 1; 
		while (tren < duoi && trai < phai) { 
			int tmp = a[tren + 1][trai]; 
			for (int i = trai; i <= phai; i++) { 
				int temp = a[tren][i]; 
				a[tren][i] = tmp; 
				tmp = temp; 
			}
			tren++; 
			for (int i = tren; i <= duoi; i++) { 
				int temp = a[i][phai]; 
				a[i][phai] = tmp; 
				tmp = temp; 
			} 
			phai--; 
			for (int i = phai; i >= trai; i--) { 
				int temp = a[duoi][i]; 
				a[duoi][i] = tmp;
		 		tmp = temp; 
			} 
			duoi--; 
			for (int i = duoi; i >= tren; i--) { 
				int temp = a[i][trai]; 
				a[i][trai] = tmp; 
				tmp = temp; 
			} 
			trai++; 
		} 
		for (int i = 0; i < n; i++) { 
			for (int j = 0; j < m; j++) { 
				cout << a[i][j] << " "; 
			} 
		} 
		cout << endl; 
	} 
	return 0; 
}

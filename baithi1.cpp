#include<bits/stdc++.h>

using namespace std;

int main ()
{
	int t;
	cin >> t;
	for(int q=0; q<t; q++)
	{
		int m , n , k;
		cin >> n >> m >> k;
		int a[n][m] , cnt = 0;
		int h1 = 0, h2= n-1, c1=0 , c2 = m-1;
		
		int b[100];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
			cin >> a[i][j];
		
			
		}}
			
		
		while (h1<= h2 && c1 <= c2)
		{
			for (int i = c1; i <= c2; i++)
			{
				
				++cnt;
				if ( cnt == k)
				{
					cout << a[h1][i];
					break;
				}
				
				
			}
			++h1;
		for (int i = h1; i<=h2;i++)
		{
			
			++cnt;
			if  ( cnt == k)
			{
				cout << a[i][c2];
				
			}
			
			
		}
		--c2;
		if ( c1<= c2)
		{
			for(int i = c2; i >= c1; i--)
			{
				
				++cnt;
				if ( cnt == k)
				{
					cout << a[h2][i];
					
				}
				
			}
			--h2;
		}
		if ( h1 <= h2)
		{
			for (int i = h2 ; i >= h1; i--)
			{
				
				++cnt;
				if ( cnt == k)
				{
					cout << a[i][c1];
					
				}
				
			}
			++c1;
		}
	
		cout << endl;
		}
		
	}
}

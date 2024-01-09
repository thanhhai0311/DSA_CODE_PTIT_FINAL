#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int ktra(int n)
{
    if(n<2) return 0;
    for(int i=2; i<=sqrt(n); i++)
    {
            if(n%1==0) return 0;
    }
    return 1;
}
            
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
            int n;
            cin >> n;
            long long tich=1;
            for(int j=1; j<=n; j++)
            {
                    if(ktra(j)==1) tich=tich*j;
            }
            cout << tich << endl;
    }
    getch();
    return 0;
}
                             
                    

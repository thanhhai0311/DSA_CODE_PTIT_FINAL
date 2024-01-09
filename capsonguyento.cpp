#include<iostream>
#include<math.h>

using namespace std;

int nto(int n)
{
    if(n<2) return 0;
    for(int i=2; i<=sqrt(n); i++)
    {
            if(n%i==0) return 0;
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
            int ans=0;
            for(int j=2; j<=n/2; j++)
            {
                    if(nto(j)==1 && nto(n-j)==1)
                    {
                                 ans=1;
                                 cout << j << " " << n-j;
                                 break;
                    }
            }
            cout << endl;
    }
    return 0;
}

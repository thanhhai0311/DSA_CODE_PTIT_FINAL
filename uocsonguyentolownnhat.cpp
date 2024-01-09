#include<iostream>
#include<math.h>

using namespace std;

int nto(long long n)
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
            long long n;
            cin >> n;
            for(long long j=2; j<=sqrt(n); j++)
            {
                    if(n%j==0 && nto(j)==1)
                    {
                              while(n%j==0)
                              {
                                           n/=j;
                              }
             
                    }
                    if(n<=1) cout << j << endl;
            }
            if(n>1) cout << n << endl;
    }
    return 0;
}
                                                      

#include<iostream>
#include<math.h>

using namespace std;

int ktra(int n)
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
    for(int j=0; j<t; j++)
    {
              int n;
              cin >> n;
              int ans=0;
              for(int i=2; i<=n/2; i++)
                      {
                           if(ktra(i)==1 && ktra(n-i)==1)
                           {
                                         cout << i << " " << n-i << endl;
                                         ans=1;
                                         break;
                           }
                      }
    if(ans==0) cout << "-1" << endl;
    }
    return 0;
}

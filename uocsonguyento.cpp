#include<iostream>
#include<math.h>
#include<conio.h>

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
            for(long long i=2; i<=sqrt(n); i++)
            {
                    if(n%i==0 && nto(i)==1)
                    {
                              while(n%i==0)
                              {
                                           cout << i << " ";
                                           n/=i;
                              }
                    }
            }
            if(n>1) cout << n << " ";
            cout << endl;
    }
    getch();
    return 0;
}

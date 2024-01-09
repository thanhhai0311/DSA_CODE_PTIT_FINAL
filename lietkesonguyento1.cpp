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
    int a, b;
    cin >> a >> b;
    if(a<b)
    {
           for(int i=a+1; i<b; i++)
           {
                   if(ktra(i)==1) cout << i << " ";
           }
    }
    if(a>b)
    {
           for(int i=b+1; i<a; i++)
           {
                   if(ktra(i)==1) cout << i << " ";
           }
    }
    return 0;
}
            

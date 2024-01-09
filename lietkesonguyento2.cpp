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
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
            int a, b;
            cin >> a >> b;
            for(int i=a; i<=b; i++)
            {
                    if(ktra(i)==1) cout << i << " ";
            }
            cout << endl;
    }
    return 0;
}

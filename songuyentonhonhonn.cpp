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
            for(int i=2; i<=n; i++)
            {
                    if(nto(i)==1) cout << i << " ";
            }
            cout << endl;
    }
    return 0;
}

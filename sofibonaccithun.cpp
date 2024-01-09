#include<iostream>

using namespace std;

void fi(int n)
{
    long long  fn1=1, fn2=1;
    long long fn;
    for(int i=3; i<=n; i++)
    {
            fn=fn1+fn2;
            fn1=fn2;
            fn2=fn;
    }
    if(n<3) cout << fn1;
    else cout << fn;
}

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
            int n;
            cin >> n;
            fi(n);
            cout << endl;
    }
    return 0;
}
    

#include<iostream>

using namespace std;

long long bcnn(long long a, long long b)
{
     long long c=a, d=b;
     while(a!=b)
     {
                if(a>b) a=a-b;
                if(a<b) b=b-a;
     }
     return (c*d)/a;
}

long long kq(long long n)
{
     long long a=1;
     for(int i=2; i<=n; i++)
     {
             a=bcnn(a,i);
     }
     return a;
}

int main()
{
    int t;
    cin >> t; 
    for(int i=0; i<t; i++)
    {
            int n;
            cin >> n;
            cout << kq(n);
            cout << endl;
    }
    return 0;
}

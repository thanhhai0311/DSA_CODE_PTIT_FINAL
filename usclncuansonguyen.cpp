#include<iostream>

using namespace std;

int ktra(int j, int n)
{
    for(int i=1; i<=n; i++)
    {
            if(j%i!=0) return 0;
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
            for(int j=n; ; j++)
            {
                    if(ktra(j, n)==1)
                    {
                                  cout << j << endl;
                                  break;
                    }
            }
    }
    return 0;
}

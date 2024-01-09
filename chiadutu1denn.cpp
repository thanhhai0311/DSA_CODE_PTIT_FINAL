#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
            long long n, k;
            cin >> n >> k;
            long long tong=0;
            if(k>0){
            for(int j=1; j<=n; j++)
            {
                    tong+=j%k;
            }
            cout << tong << endl;
    }}
    return 0;
}


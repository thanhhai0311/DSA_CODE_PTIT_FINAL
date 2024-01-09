#include<iostream>

using namespace std;
 
int main()
{
    int n;
    cin >> n;
    long long tong=0;
    long long tich=1;
    for(int i=1; i<=n; i++)
    {
            tich*=i;
            tong=tong+tich;
    }
    cout << tong;
    return 0;
}

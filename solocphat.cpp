#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
            int n;
            cin >> n;
            int kt=0;
            while(n>0)
            {
                      int a=n%10;
                      if(a!=6 && a!=8 && a!=0) break;
                      n=n/10;
            }
            if(n==0) cout << "YES" << endl;
            else cout << "NO" << endl;
    }
    return 0;
}
            
                      

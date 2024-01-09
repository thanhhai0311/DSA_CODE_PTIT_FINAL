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
            int n, k;
            cin >> n >> k;
            int dem=0, kq=-1;
            for(int j=2; j<=sqrt(n); j++)
            {
                    if(n%j==0 && nto(j)==1)
                    {
                              while(n%j==0){
                              dem++;
                              if(dem==k) {cout << j; break;}
                              else {n/=j;}}
                    }
            }
            if(dem+1==k && n>1) cout << n;
            else if(k>dem) cout << "-1";
            cout << endl;
    }
    return 0;
}








                    

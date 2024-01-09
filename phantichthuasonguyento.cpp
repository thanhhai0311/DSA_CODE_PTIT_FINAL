#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
            long a;
            cin >> a;
            int j=2;
            while(a>1)
            {
                      int dem=0;
                      while(a%j==0)
                      {
                                   a/=j;
                                   dem++;
                      }
                      if(dem!=0)
                      {cout << j << " " << dem << " ";}
                      if(a%j!=0) j++;
            }
            cout << endl;
    }
    return 0;
}
                                       
                                    
                       

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int t; 
    cin >> t;
    for(int i=0; i<t; i++)
    {
            int n;
            cin >> n;
            int a[n];
            for(int j=0; j<n; j++)
            {
                    cin >> a[j];
            }
            int min=abs(a[0]-a[1]);
            for(int j=0; j<n; j++)
            {
                    for(int k=j+1; k<n; k++)
                    {
                            if(abs(a[j]-a[k])<min) min=abs(a[j]-a[k]);
                    }
            }
            cout << min << endl;
    }
    return 0;
}

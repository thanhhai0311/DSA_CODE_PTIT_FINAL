#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {       
            double a,b,c,d;
            cin >> a >> b >> c >> d;
            double kc=(double)sqrt((a-c)*(a-c)+(b-d)*(b-d));
            cout << fixed << setprecision(4) << kc << endl;
    }
    return 0;
}
            
    

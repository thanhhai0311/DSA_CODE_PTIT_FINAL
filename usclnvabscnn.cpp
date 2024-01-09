#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
            long long a, b;
            cin >> a >> b;
            long long c=a;
            long long d=b;
            int uscln;
            while(a!=b)
            {
                       if(a>b) a=a-b;
                       if(a<b) b=b-a;
            }
            if(a==b) uscln=a;
            long long bscnn=(c*d)/uscln;
            cout << bscnn << " " << uscln << endl;
    }
    getch();
    return 0;
}
                 

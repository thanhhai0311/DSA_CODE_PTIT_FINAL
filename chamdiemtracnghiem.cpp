#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

int main()
{
    char a[15]= {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'}; 
    char b[15]= {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
            int made;
            cin >> made;
            char s[15];
            for(int i=0; i<15; i++)
            {
                    cin >> s[i];
            }
            
            double diem=0;
            if(made==101)
            {
                         for(int i=0; i<15; i++)
                         {
                                 if(s[i]==a[i]) diem+=(double)10/15;
                         }
            }
            if(made==102)
            {
                         for(int i=0; i<15; i++)
                         {
                                 if(s[i]==b[i]) diem+=(double)10/15;
                         }
            }
            cout << fixed << setprecision(2) << diem << endl;
    }
    return 0;
}

            

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
            int a;
            cin >> a;
            int tong=0;
            while(a>0)
            {
                      tong=tong+a%10;
                      a/=10;
            }
            if(tong<10) cout << tong << endl;
            else
            {
                while(tong>=10)
                {
                               int tong2=0;
                               while(tong>0)
                               {
                                            tong2=tong2+tong%10;
                                            tong/=10;
                               }
                               tong=tong2;
                }
                cout << tong << endl;
            }
           
    }
    getch();
    return 0;
}

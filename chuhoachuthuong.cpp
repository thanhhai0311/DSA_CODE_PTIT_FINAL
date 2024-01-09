#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n; 
    cin >> n;
    for(int i=0; i<n; i++)
    {
            char c;
            cin >> c;
            if(c>='a' && c<='z') c-=32;
            else if(c>='A' && c<='Z') c+=32;
            cout << c << endl;
    }
    getch();
    return 0;
}

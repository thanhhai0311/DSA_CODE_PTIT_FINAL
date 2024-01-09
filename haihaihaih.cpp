#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int i=15;
    while(i>=a && i<=b)
    {
            cout << i << " ";
            i+=15;
    }
    getch();
    return 0;
}

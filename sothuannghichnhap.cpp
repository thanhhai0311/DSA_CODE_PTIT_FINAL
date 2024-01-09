#include<iostream>
#include<conio.h>

using namespace std;
 
int main()
{
    string s;
    int n=s.size();
    for(int i=0; i<n/2; i++)
    {
            if(s[i]!=s[n-i-1]) break;
    }
    //if(i==n/2) cout << "YES";
    cout << n;
    getch();
    return 0;
}

            

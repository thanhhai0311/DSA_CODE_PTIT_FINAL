#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int ktra(string s)
{
    int a=s.size();
    for(int i=0; i<a; i++)
    {
           if(s[i]-s[i+1]!=1


int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
            string s;
            cin >> s;
            if(ktra(s)==0) cout << "NO" << endl;
            if(ktra(s)==1) cout << "YES" << endl;
    }
    getch();
    return 0;
} 
            

#include<iostream>
#include<conio.h>

using namespace std;

int ktra(string s)
{
    for(int i=0; i<s.size(); i++)
    {
            if(s[i]!=s[s.size()-1-i]) return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
            string s;
            int a=s.size();
            cin >> s;
            int b=ktra(s);
            if(b==0) cout << "NO" << endl;
            if(b==1) cout << "YES" << endl;
    }
    getch();
    return 0;
}
                    
    

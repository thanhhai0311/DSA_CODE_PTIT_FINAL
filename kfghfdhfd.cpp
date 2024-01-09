#include<iostream>
#include<string.h>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
    string s1="ABBADCCABDCCABD";
    string s2="ACCABCDDBBCDDBB";
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
            int made;
            cin >> made;
            string s;
            cin.ignore();
            getline(cin,s);
            int a=s.size();
            double diem=0;
            if(made==101)
            {
                         for(int j=0; j<a; j++)
                         {
                                 if(s[j]==s1[j]) diem+=(double)10/15;
                         }
            }
            if(made==102)
            {
                         for(int j=0; j<a; j++)
                         {
                                 if(s[j]==s2[j]) diem+=(double)10/15;
                         }
            }
            cout << fixed << setprecision(2) << diem << endl;
    }
    getch();
    return 0;
}

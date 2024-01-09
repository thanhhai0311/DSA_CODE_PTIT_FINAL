#include<iostream>

using namespace std ; 

int main()
{ 
    int t ;
    cin>>t ;
    while(t--)
    { 
              string s ; 
              cin>>s ; 
              int res = s.find("084"); 
              string kkk = s.erase(res,3); 
              cout<<kkk<<endl; 
    }
    return 0; 
}

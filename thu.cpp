#include<bits/stdc++.h>

using namespace std;

void BackTrack(int j){
       for(int i=X[j-1]+1; i<=n-k+j; i++){
                     X[i]=j;
                     if(j==k)
                                 print();
                     else
                                 BackTrack(j+1);
         }
 }
 
 int main(){
 	cout << " ";
 }

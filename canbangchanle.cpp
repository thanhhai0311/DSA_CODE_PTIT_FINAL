#include<iostream>
#include<math.h>

using namespace std;

int ktra(long n)
{
    int chan=0;
    int le=0;
    while(n!=0)
    {
               int a=n%10;
               if(a%2==0) chan+=1;
               if(a%2!=0) le+=1;
               n/=10;
    }
    if(le==chan) return 1;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    long a=pow(10,n-1);
    long b=pow(10,n);
    if(n>1 && n<7 && n%2==0)
    {
           int dem=0;
           for(int i=a; i<b ; i++)
           {
                   if(ktra(i)==1) 
                   {
                                  cout << i << " ";
                                  dem++;
                   }
                   if(dem%10==0) cout << endl;
           }
    }
    return 0;
}
    

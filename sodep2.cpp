#include<stdio.h>
#include<conio.h>
#include<math.h>
int ktra(int n)
{
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    int dem=0;
    if(n>3)
    {
           for(int i=0; i<=sqrt(n); i++)
           {
                   if(n%i==0) dem=dem+1;
           }
           if(dem==0) return 1;
           if(dem!=0) return 0;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int tong=0;
    int dem;
    int bd=pow(10,n-1);
    int kt=pow(10,n);
    for(int i=bd; i<kt; i++)
    {
            while(n>1) 
            {
                       tong=tong+i%10;
                       i=i/10;
            }
    if(ktra(tong)==1 && ktra(i)==1) 
    { 
                     dem=dem+1;
                     printf("%d", i);
    }
    if(dem==0) printf("0");
    }
    getch();
    return 0;
}
    
    
                       
                       
           

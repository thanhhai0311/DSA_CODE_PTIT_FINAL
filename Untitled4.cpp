#include<stdio.h>
#include<math.h>
#include<conio.h>
int nto(int n)
{
    for(int i=2; i<=sqrt(n); i++)
    {
            if(n%i==0) return 0;
    }
    return 1;
}
int tong(int n)
{
    while(n>0)
    {
              tong+=n%10;
              n/=10;
    }
    return tong;
}
long long f[100];
void in()
{
     f[0]=0;
     f[1]=1;
     for(int i=2; i<=93; i++)
     {
             f[i]=f[i-1]+f[i-2];
     }
}
int main()
{
    in();
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
            int a;
            scanf("%d", &a);
            if(nto(a)==1)
            {
                         for(int j=0; j<=93; j++)
                         {
                                 if(tong(a)==f[j]
                                 {
                                                 printf

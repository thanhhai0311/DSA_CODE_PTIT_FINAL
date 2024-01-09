#include<stdio.h>
#include<math.h>
#include<conio.h>
int ktra(int n)
{
    if(n<2) return 0;
    for(int i=2; i<=sqrt(n); i++)
    {
            if((n%i)==0) return 0;
    }
    return 1;
}
int sum(int n)
{
    int sum=0;
    while(n>0)
    {
              sum=sum+n%10;
              n=n/10;
    }
    if(ktra(sum)==1) return 1;
    if(ktra(sum)==0) return 0;
}
int cso(int n)
{
    while(n>0)
    {
              if((n%10)==0 || (n%10)==1 || (n%10)=4 || (n%10)==6 || (n%10)==8 || (n%10)==9) return 0;
              n/=10;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
            int a,b;
            scanf("%d%d", &a, &b);
            int dem=0;
            for(int i=a; i<=b; i++)
            {
                    if(ktra(i)==1 && sum(i)==1 && cso(i)==1) { printf("%d ", i); dem++;}
            }
            printf("%d", dem);
    }
    getch();
    return 0;
}
                           
    

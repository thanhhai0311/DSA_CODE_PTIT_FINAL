#include<stdio.h>
#include<math.h>
#include<conio.h>
int ktra(int n)
{
    int tong=1
    for(int i=2; i<=sqrt(n); i++)
    {
            if(n%i==0) 
            {
                       if(n==n/i) tong=tong+i;
                       else tong=tong+i+n/i;
            }
    } 
    if(tong==n) return 1;
    return 0;
}
            
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
            long long a;
            scanf("%lld", &a);
            printf("%d", ktra(a) );
    }
    getch();
    return 0;
}

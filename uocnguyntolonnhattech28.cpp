#include<stdio.h>
#include<math.h>
#include<conio.h>
int ktra(int n)
{
    for(int i=2; i<=sqrt(n); i++)
    {
            if(n%i==0) return 0;
    }
    return 1;
}

int pt(int n)
{
    for(int i=2; i<=n; i++)
    {
            while(n%i==0)
            {
                         n=n/i;
            }
            if(ktra(n)==1) break;
    }
    return n;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", pt(n));
    getch();
    return 0;
}

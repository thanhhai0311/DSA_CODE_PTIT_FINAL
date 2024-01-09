#include<stdio.h>
#include<conio.h>
int ktra(long long a, long long b)
{
    while(a!=b)
    {
               if(a>b) a=a-b;
               if(a<b) b=b-a;
    }
    if(a==b) return a;
}
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    if(ktra(a,b)==1) printf("YES");
    getch();
    return 0;
}

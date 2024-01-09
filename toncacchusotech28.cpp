#include<stdio.h>
#include<math.h>
#include<conio.h>
int tong(int n)
{
    int tong=0;
    while(n>0)
    {
              tong=tong+n%10;
              n/=10;
    }
    return tong;
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
            int a;
            scanf("%d", &a);
            printf("%d", tong(a));
    }
    getch();
    return 0;
}

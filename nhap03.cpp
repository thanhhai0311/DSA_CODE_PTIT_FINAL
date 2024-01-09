#include<stdio.h>
#include<conio.h>
int tong(int n)
{
    int sum=0;
    for(int i=1; i<=n; i++)
    {
            sum=sum+1/i;
    }
    return sum;
}
            
int main()
{
    int n;
    scanf("%d", &n);
    tong(n);
    getch();
    return 0;
}

#include<stdio.h>
#include<conio.h>
int dem(int n)
{
    int dem=0;
    for(int i=1; i<=n; i++)
    {
            if(n%i==0) dem++;
    }
    return dem;
}
int main()
{
    int n;
    scanf("%d", &n);
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
            if(dem(i)==3) cnt++;
    }
    printf("%d", cnt);
    getch();
    return 0;
}
    

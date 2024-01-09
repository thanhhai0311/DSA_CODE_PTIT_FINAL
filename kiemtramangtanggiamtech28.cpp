#include<stdio.h>
#include<conio.h>
int ktra(int a[], int n)
{
    for(int i=1; i<n; i++)
    {
            if(a[i+1]-a[i]<=0);
            {
                             return 0;
                             break;
            }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
            scanf("%d", &a[i]);
    }
    if(ktra(a,n)==1) printf("YES");
    if(ktra(a,n)==0) printf("NO");
    getch();
    return 0;
}

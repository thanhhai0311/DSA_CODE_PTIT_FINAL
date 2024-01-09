#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
            scanf("%d", &a[i]);
    }
    int max=a[0];
    printf("%d ", a[0]);
    for(int i=1; i<n; i++)
    {
            if(a[i]>max) printf("%d ", a[i]);
            if(a[i]>max) max=a[i];
    }
    getch();
    return 0;
}

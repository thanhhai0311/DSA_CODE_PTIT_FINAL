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
    int min=a[0];
    for(int i=1; i<n; i++)
    {
            if(a[i]>a[0]) max=a[i];
            if(a[i]<a[0]) min=a[i];
    }
    printf("%d %d", max, min);
    getch();
    return 0;
}

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
    int max1=a[0];
    int max2=a[0];
    for(int i=1; i<n; i++)
    {
            if(a[i]>max1)
            {
                         max2=max1;
                         max1=a[i];
            }
            else if(a[i]>max2 && a[i]!=max1)
            {
                         max2=a[i];
            }
    }
    if(max2==a[0]) max2=-1;
    printf("%d %d", max1, max2);
    getch();
    return 0;
}

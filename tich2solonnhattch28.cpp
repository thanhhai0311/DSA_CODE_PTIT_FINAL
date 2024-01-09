#include<stdio.h>
#include<conio.h>
int max(int a, int b)
{
    if(a>b) return a;
    return b;
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
    int max1=a[0], max2=a[0];
    for(int i=0; i<n; i++)
    {
            if(a[i]>max1)
            {
                         max2=max1;
                         max1=a[i];
            }
            else if(a[i]>max2)
            {
                 max2=a[i];
            }
    }
    printf("%d\n", max2*max1);
    int min1=1e9-1, min2=1e9-1;
    for(int i=0; i<n; i++)
    {
            if(a[i]<min1) 
            {
                          min2=min1;
                          min1=a[i];
            }
            else if(a[i]<min2)
            {
                 min2=a[i];
            }
    }
    printf("%d\n", min1*min2);
    printf("%d", max((max1*max2), (min1*min2)));                     
    getch();
    return 0;
}
            

#include<stdio.h>
#include<conio.h>
int ktra(int a, int b)
{
    while(a!=b)
    {
               if(a>b) a=a-b;
               if(b>a) b=b-a;
    }
    return a;
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
    int dem=0;
    for(int i=0; i<n; i++)
    {
            for(int j=i+1; j<n; j++)
            {
                    if(ktra(a[i], a[j])==1) dem++;
            }
    }
    printf("%d", dem);
    getch();
    return 0;
}

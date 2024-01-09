#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int mang[n];
    for(int i=0; i<n; i++)
    {
            scanf("%d", &mang[i]);
    }
    for(int i=n-1; i>=0; i--)
    {
            printf("%d ", mang[i]);
    }
    return 0;
}
    
    

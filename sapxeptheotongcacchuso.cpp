#include<stdio.h>
int tong(int n)
{
    int sum=0;
    while(n)
    {
              sum=sum+n%10;
              n/=10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ds[200];
    for(int i=0; i<n; i++)
    {
            scanf("%d", &ds[i]);
    }
    for(int i=0; i<n-1; i++)
    {
            for(int j=i+1; j<n; j++)
            {
                    if(tong(ds[i])>tong(ds[j]))
                    {
                                               int tamthoi=ds[i];
                                               ds[i]=ds[j];
                                               ds[j]=tamthoi;
                    }
            }
    }
    for(int i=0; i<n; i++)
    {
            printf("%d ", ds[i]);
    }
    return 0;
}

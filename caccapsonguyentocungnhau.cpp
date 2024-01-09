#include<stdio.h>
int ktra(long long a, long long b)
{
    while(a!=b)
    {
               if(a>b) a=a-b;
               if(a<b) b=b-a;
    }
    if(a==b) return a;
}

int main()
{
    int n;
    scanf("%d", &n);
    long long arr[n];
    long long dem=0;
    for(int i=0; i<n; i++)
    {
            scanf("%lld", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
            for(int j=i+1; j<n; j++)
            {
                    if(ktra(arr[i], arr[j])==1 && arr[i]>1 && arr[j]>1) dem=dem+1;
            }
    }
    printf("%lld", dem);
    return 0;
}
    
    

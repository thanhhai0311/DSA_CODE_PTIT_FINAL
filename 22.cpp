#include<stdio.h>
int ktra(long long a, long long b)
{
    if (b == 0) return a;
    return ktra (b, a % b);
}

int main()
{
    int n;
    scanf("%d", &n);
    long long arr[n];
    int dem=0;
    for(int i=0; i<n; i++)
    {
            scanf("%lld", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
            for(int j=i+1; j<n; j++)
            {
                    if(ktra(arr[i], arr[j])==1) dem=dem+1;
            }
    }
    printf("%d", dem);
    return 0;
}

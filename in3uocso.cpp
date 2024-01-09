#include<stdio.h>
int main()
{
    long long  dem=0;
    long long arr[100];
    long long a;
    scanf("%lld", &a);
    for(long long i=1; i<=a; i++)
    {
             if(a%i==0) 
             {
                        arr[dem]=i;
                        dem++;
             }
    }
    if(dem<3) printf("THIEU");
    else printf("%lld %lld %lld", arr[dem-3], arr[dem-2], arr[dem-1]);
    return 0;
}

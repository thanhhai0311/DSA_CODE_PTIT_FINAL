#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n>=1 && n<=100)
    {
    for(int i=0; i<n; i++)
    {
            long long a,b;
            scanf("%lld%lld", &a, &b);
            if(a<=0 || b<=0) printf("Nhap sai\n");
            if(a>0 && b>0)
            {
                long long a1=a, b1=b;
                long long ucln;
                while(a!=b)
                {
                           if(a>b) a=a-b;
                           if(a<b) b=b-a;
                }
                if(a==b) ucln=a;
                long long bcnn=(a1*b1)/a;
                printf("%lld %lld\n", bcnn, ucln);
            }
    }}
    return 0;
}

#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if(N<=0) printf("NO");
    else
    {
        int tong=0;
        for(int i=1; i<=N; i++)
        {
                tong=tong+i;
        }
        printf("%d", tong);
    }
    return 0;
}

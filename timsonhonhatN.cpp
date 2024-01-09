#include<stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    if(X<=0) printf("NO");
    else
    {
        int N;
        int tong=0;
        for(int i=1; i<=X; i++)
        {
                tong=tong+i;
                if(tong>X)
                {
                          N=i;
                          break;
                }
        }
        printf("%d", N);
    }
        return 0;
}
            

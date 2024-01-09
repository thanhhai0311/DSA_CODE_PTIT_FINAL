#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int n;
    scanf("%d", &n);
    float tong=0;
    for(int i=1; i<=n; i+=2)
    {
            tong=tong+(float)1/i;
    }
    printf("%.6f", (float)tong);
    getch();
    return 0;
}

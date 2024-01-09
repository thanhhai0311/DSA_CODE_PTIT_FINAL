#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n>0 && n<100) printf("%d", n);
    else printf("Nhap sai");
    return 0;
}

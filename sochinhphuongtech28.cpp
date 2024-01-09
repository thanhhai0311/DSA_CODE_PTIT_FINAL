#include<stdio.h>
#include<conio.h>
#include<math.h>
int ktra(int n)
{
    int a=sqrt(n);
    if((a*a)==n) return 1;
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    if(ktra(n)==0) printf("NO");
    if(ktra(n)==1) printf("YES");
    getch();
    return 0;
}

#include<stdio.h>
#include<math.h>
#include<conio.h>
int ktra(int n)
{
    int dem=0;
    for(int i=2; i<=sqrt(n); i++)
    {
            if(n%i==0) dem+=1;
    }
    if(dem==0) return 1;
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    if(ktra(n)==1) printf("YES");
    if(ktra(n)==0) printf("NO");
    getch();
    return 0;
}

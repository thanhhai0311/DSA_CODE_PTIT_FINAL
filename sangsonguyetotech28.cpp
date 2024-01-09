#include<stdio.h>
#include<math.h>
#include<conio.h>
int ktra(int n)
{
    if(n<2) return 0;
    for(int i=2; i<=sqrt(n); i++)
    {
            if(n%i==0) return 0;
    }
    return 1;
}
int ktracso(int n)
{
    while(n>0)
    {
              if((n%10)==0 || (n%10)==1 || (n%10)==4 || (n%10)==6 || (n%10)==8 || (n%10)==9) return 0;
              n/=10;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    if(ktracso(n)==1 && ktra(n)==1) printf("YES");
    if(ktracso(n)==0 || ktra(n)==0) printf("NO");
    getch();
    return 0;
}

    

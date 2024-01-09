#include<stdio.h>
#include<conio.h>
#include<math.h>
int dem(int n){

    int dem=0;
    for(int i=2; i<=n; i++)
    {
            if(n%i==0) dem++;
            while(n%i==0) n/=i;
    }
    return dem;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", dem(n));
    getch();
    return 0;
}

            

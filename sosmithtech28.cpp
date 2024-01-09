#include<stdio.h>
#include<math.h>
#include<conio.h>
int sum(int n)
{
    int tong=0;
    while(n>0)
    {
              tong+=n%10;
              n/=10;
    }
return tong;
}
int smith(int n)
{
    int tong1=sum(n);
    int tong2=0;
    int tmp=n;
    for(int i=2; i<=n; i++)
    {
            while(n%i==0)
            {
                         tong2+=sum(i);
                         n/=i;
            }
    }
    if(n==tmp) return 0;
    else
    {
        if(tong1==tong2) return 1;
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    if(smith(n)==1) printf("YES");
    if(smith(n)==0) printf("NO");
    getch();
    return 0;
}

    
            
    

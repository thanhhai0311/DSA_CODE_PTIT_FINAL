#include<stdio.h>
#include<math.h>
#include<conio.h>
int count(int n, int p)
{
    int ans=0;
    for(int i=p; i<=n; i+=p)
    { 
            int tmp=i;
            while(tmp%p==0)
            {
                           ++ans;
                           tmp/=p;
            }
    }
    return ans;
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
            int n,p;
            scanf("%d%d", &n, &p);
            printf("%d\n", count(n,p));
    }
    getch();
    return 0;
}

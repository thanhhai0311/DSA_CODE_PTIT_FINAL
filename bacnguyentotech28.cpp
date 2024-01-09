#include<stdio.h>
#include<math.h>
#include<conio.h>
int dem(int n, int p)
{
    int dem=0;
    for(int i=p; i<=n; i+=p)
    {
            int tmp=i;
            while(tmp%p==0) 
            {
                            dem++;
                            tmp/=p;
            }
    }
    return dem;
}
int main()
{
    int n,p;
    scanf("%d%d", &n, &p);
    printf("%d", dem(n,p));
    getch();
    return 0;
}

    

#include<stdio.h>
#include<math.h>
#include<conio.h>
void pt(int n)
{
    for(int i=2; i<=n; i++)
    {
            int dem=0;
            while(n%i==0)
            {
                         dem=dem+1;
                         n/=i;
            }
            if(dem>0)
            printf("%d(%d) ", i, dem);
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
            int n;
            scanf("%d", &n);
            printf("TC %d ", i);
            pt(n);
            printf("\n");
    }
    getch();
    return 0;
}
    

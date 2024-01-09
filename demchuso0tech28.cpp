#include<stdio.h>
#include<math.h>
#include<conio.h>
int dem(int n)
{
    int dem=0;
    for(int i=5; i<=n; i+=5)
    {
            int tmp=i;
            while(tmp%5==0)
            {
                           dem++;
                           tmp/=5;
            }
    }
    return dem;
}
   
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
            int N;
            scanf("%d", &N);
            printf("%d", dem(N));
    }
    getch();
    return 0;
}
            
            

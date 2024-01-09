#include<stdio.h>
#include<math.h>
#include<conio.h>
int sphenic(int n)
{
    int dem=0;
    for(int i=2; i<=n; i++)
    {
            int demts=0;
            while(n%i==0)
            {
                         demts++;
                         n=n/i;
            }
            if(demts>=2) return 0;
            if(demts==1) dem++;
    }
    return dem==3;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sphenic(n));
    getch();
    return 0;
}

#include<stdio.h>
#include<math.h>
#include<conio.h>
int sodep(int n)
{
    for(int i=2; i<=n; i++)
    {
            int dem=0;
            while(n%i==0)
            {
                         dem++;
                         n/=i;
            }
            if(dem>=2)
            {
                      return 1; 
                      break;
            }
    }
   return 0;
}
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    for(int i=a; i<=b; i++)
    {
            if(sodep(i)==1) printf("%d ", i);
    }
    getch();
    return 0;
}

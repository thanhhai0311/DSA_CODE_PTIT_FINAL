#include<stdio.h>
#include<math.h>
#include<conio.h>
void pt(int n)
{
     for(int i=2; i<=n; i++)
     {
             while(n%i==0)
             {
                          printf("%d ", i);
                          n/=i;
             }
     }
  
}
int main()
{
    int n;
    scanf("%d", &n);
    pt(n);
    getch();
    return 0;
}
    

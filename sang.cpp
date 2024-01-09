#include<stdio.h>
#include<math.h>
#include<conio.h>
int nto[1000001];
void sang()
{
     for(int i=0; i<=1000000; i++)
     {
             nto[i]=1;
     }
     nto[0]=0; nto[1]=0;
     for(int i=2; i<=1000; i++)
     {
             if(nto[i]==1)
             { 
                          for(int j=i*i; j<=1000; j+=i)
                          {  
                                  nto[j]=0;
                          }
             }
     }
}
int main()
{
    sang();
    int n;
    scanf("%d", &n);
    for(int i=2; i<=n; i++)
    {
            if(nto[i]==1) printf("%d ", i);
    }
    getch();
    return 0;
}

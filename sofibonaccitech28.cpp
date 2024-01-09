#include<stdio.h>
#include<conio.h>
long long fb[92];
void in()
{
     fb[0]=0;
     fb[1]=1;
     for(int i=2; i<=93; i++)
     {
             fb[i]=fb[i-1]+fb[i-2];
     }
}
int main()
{
    int n;
    scanf("%d", &n);
    in();
    for(int i=0; i<n; i++)
    {
            long long a;
            scanf("%lld", &a);
            int ok;
            for(i=0; i<=93; i++)
            {
                     if(a==fb[i]) 
                     {
                                  ok=1;
                                  break;
                     }
            }
            if(ok==1) printf("YES\n");
            else printf("NO\n");
    }
    getch();
    return 0;
}

    

#include<stdio.h>
#include<conio.h>
int ucln(int a, int b)
{
    if(a==0) return b;
    if(b==0) return a;
    while(a!=b)
    {
               if(a>b) a=a-b;
               if(a<b) b=b-a;
    }
    return a;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    for(int i=a; i<=b; i++)
    {
            for(int j=i+1; j<=b; j++)
            {
                    if(ucln(i,j)==1) printf("(%d, %d)\n", i, j); 
            }
    }
    getch();
    return 0;
}
    

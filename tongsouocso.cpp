#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
            int a;
            scanf("%d", &a);
            int dem=0;
            if(a%3!=0) printf("0\n");
            else
            {
                for(int i=3; i<=a; i+=3)
                {
                        if(a%i==0) dem=dem+1;
                }
                printf("%d\n", dem);
            }
    }
    return 0;
}
            
            
            
    

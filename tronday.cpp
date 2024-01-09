#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
            int s;
            scanf("%d", &s);
            int a[s], b[s];
            for(int i=0; i<s; i++)
            {
                    scanf("%d\n", &a[i]);
                    scanf("%d", &b[i]);
            }
            for(int i=0; i<s; i++)
            {
                    for(int j=i+1; j<s; j++)
                    {
                            if(a[i]>a[j])
                            {
                                         int tempa=a[i];
                                         a[i]=a[j];
                                         a[j]=tempa;
                            }
                    }
            }
            for(int i=0; i<s; i++)
            {
                    for(int j=i+1; j<s; j++)
                    {
                            if(b[i]>b[j])
                            {
                                         int tempb=b[i];
                                         b[i]=b[j];
                                         b[j]=tempb;
                            }
                    }
            }
            printf("%d\%d", a[s], b[s]);
            getch();
            return 0;
}
}
            
                    

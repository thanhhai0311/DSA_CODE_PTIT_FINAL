#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
int ktra(int n)
{
    if(n<2) return 0;
    for(int i=2; i<=sqrt(n); i++)
    {
            if(n%i==0) return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
            char a[500];
            scanf("%s", a);
            int dem=0;
            for(int i=0; i<strlen(a); i++)
            {
                    if(a[i]=='2' || a[i]=='3' || a[i]=='5' || a[i]=='7') dem++;
            }
            if(ktra(strlen(a))==1 && dem>(strlen(a)-dem)) printf("YES\n");
            else printf("NO\n");
    }
    getch();
    return 0;
}
    
    

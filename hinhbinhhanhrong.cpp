#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d", &n, &m);
    for(int i=1; i<=n; i++){
            for(int j=1; j<=m+i-1; j++){
                    if(i==1) printf("*");
                    else
                    {
                        if(j==1 || j<=i-1) printf("~");
                        else{
                             if(i==n || j==i || j==m+i-1) printf("*");
                             else printf(".");
                             }
                    }}
            printf("\n");}
return 0;
}

#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char n[500];
    gets(n);
    int cs=strlen(n);
    int tong=0;
    for(int i=0; i<cs; i++)
    {
            tong=tong+n[i]-48;
    }
    if(tong%3==0) printf("YES");
    else printf("NO");
    return 0;
}

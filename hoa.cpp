#include<stdio.h>
#include<math.h>
#include<string.h>
#include<conio.h>
int main()
{
    char a[500];
    scanf("%s", a);
    int tong=0;
    for(int i=0; i<strlen(a); i++)
    {
            tong=tong+a[i];
    }
    if(tong%3==0) printf("YES");
    else printf("NO");
    getch();
    return 0;
}

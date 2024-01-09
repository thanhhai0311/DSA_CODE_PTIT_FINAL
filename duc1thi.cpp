#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char a[500];
    scanf("%s", a);
    for(int i=0; i<strlen(a); i++)
    {
            if((a[i]-a[i+1]!=1 || a[i+1]-a[i]!=1) && i<strlen(a)-1)
            {
                              printf("NO");
                              break;
            }
    }
    getch();
    return 0;
}

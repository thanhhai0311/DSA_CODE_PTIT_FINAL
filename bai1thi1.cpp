#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char a[500];
    scanf("%s", a);
    for(int i=0; i<strlen(a); i++)
    {
            printf("%c", a[i]);
            if(i%3==0) printf(",");
    }
    getch();
    return 0;
}

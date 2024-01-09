#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char n[1005];
    gets(n);
    for(int i=0; i<strlen(n); i++)
    {
            printf("%c", n[i]);
            if(i%3==(strlen(n)%3+2)%3 && i!=strlen(n)-1) printf(",");
    }
    getch();
    return 0;
}

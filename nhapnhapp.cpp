#include<stdio.h>
#include<string.h>
#include<conio.h>

int main() {
    char c;
    char s[100];
    scanf("%c", &c);
    scanf("%s", s);
    int dem=0;
    int dodai=strlen(s);
    for(int i=0; i<dodai; i++)
    {
        if(s[i]==c)
        { dem=dem+1;}
    }
    printf("%d", dem);
    getch();
    return 0;
}

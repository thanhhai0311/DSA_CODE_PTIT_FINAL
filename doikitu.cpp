#include<stdio.h>
#include<string.h>
int main()
{
    char xau[100];
    gets(xau);
    for(int i=0; i<strlen(xau); i++)
    {
            if(xau[i]>=97 && xau[i]<=122)
            xau[i]-=32;
    }
    printf("%s", xau);
    return 0;
}    
    

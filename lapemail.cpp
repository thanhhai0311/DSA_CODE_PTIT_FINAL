#include<stdio.h>
#include<string.h>
int main()
{
    char xau[1000];
    gets(xau);
    for(int i=0; i<strlen(xau); i++)
    {
            if(xau[i]>=65 && xau[i]<=90)
            xau[i]+=32;
    }
    char a[10][100];
    int n=0;
    char *token=strtok(xau," ");
    while(token!=NULL)
    {
                      strcpy(a[n++], token);
                      token= strtok(NULL, " ");
    }
    for(int i=0; i<n-1; i++)
    {
            printf("%c", a[i][0]);
    }
    printf("%s", a[n-1]);
    printf("@ptit.edu.vn");
    return 0;
}

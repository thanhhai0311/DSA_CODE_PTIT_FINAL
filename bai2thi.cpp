#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
    char a[500];
    scanf("%s", a);
    for(int i=0; i<strlen(a); i++)
    {
            for(int j=i+1; j<strlen(a); j++)
            {
                    if(a[i]>a[j])
                    {
                                 int temp=a[i];
                                 a[i]=a[j];
                                 a[j]=temp;
                    }
            }
    }
    for(int i=0; i<strlen(a); i++)
    {
            if(a[i]!='0')
            {
                          printf("%c", a[i]); 
            }
            
    }}
    getch();
    return 0;
}

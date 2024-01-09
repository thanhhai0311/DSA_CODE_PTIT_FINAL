#include<stdio.h>
#include<string.h>
#include<conio.h>
struct SinhVien
{
       char ten[50];
       char ma[20];
};
typedef struct SinhVien SV;
SV nhap()   
{
         SV x;
         getchar();
         gets(x.ten);
         scanf("%s", x.ma);
         return x;
}
void in(SV a)
{
     printf("%s %s\n", a.ten, a.ma);
}
int main()
{
    SV a[1000];
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {SV i=nhap();}
    for(int i=0; i<n; i++) {in(a[i]);}
    getch();
    return 0;
}

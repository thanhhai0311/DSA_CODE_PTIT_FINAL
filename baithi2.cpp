#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if(N%5==0) printf("%d", 3*N);
    if(N%5==2) printf("%d", 2*N);
    if(N%5!=0 && N%5!=2) printf("%d", 5*N);
    return 0;
}

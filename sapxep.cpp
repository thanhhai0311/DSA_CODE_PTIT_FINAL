#include <stdio.h>

int tong(int n)
{
int s=0;
while(n)
{
s=s+n%10;
n=n/10;
}
return s;
}
int main()
{
int n;
scanf("%d",&n);
int A[200];
for(int i=0;i<n;i++)
scanf("%d",&A[i]);
for(int i=0;i<n-1;i++)
{
for(int j=i+1;j<n;j++)
if(tong(A[i])>tong(A[j]))
{
int temp=A[i];
A[i]=A[j];
A[j]=temp;
}
}
for(int i=0;i<n;i++)
printf("%d ",A[i]);
}

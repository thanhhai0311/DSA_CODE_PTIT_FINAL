#include <stdio.h>
#include <math.h>
int ktranto(int n)
{
	if(n<2)
	return 0;
	for(int i=2;i<=sqrt(n);i++)
	if(n%i==0)
	return 0;
	return 1;
}
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
	int bd=pow(10,n-1);
	int kt=pow(10,n);
	int dem=0;
	for(int i=bd;i<=kt;i++)
	if(ktranto(tong(i)) && ktranto(i))
	{
		printf("%d ",i);
		dem++;
	}
	if(dem==0)
	printf("0");
}

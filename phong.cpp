#include<stdio.h>
#include<conio.h>
int UCLN(int a,int b)
{
	
	if (a>0&&b>0)
	{
		while (a!=b)
		{
			if(a>b)
			{
				a=a-b;
			
			}
			
			else
			{
				b=b-a;
			}
			
		}
		return a;
	}
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	long long t=a*b;
	
	int ucln=UCLN(a,b);
	int bcnn=t/ucln;
	printf("%d ",ucln);
	printf("\n%d",bcnn);
	getch();
}

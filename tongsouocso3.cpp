#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
    for(int i=0; i<n; i++)
	{
		long a;
		scanf("%ld",&a);
		int dem=0;
		for(int i=1;i<=sqrt(a);i++)
		{
			if(a%i==0)
			{
				if(i%3==0) dem++;
				if((a/i)%3==0) dem++;
			}
		}
		i--;
		if((i*i == a) && (i%3 == 0)) dem--;
		printf("%d\n",dem);
	}
	return 0;
}


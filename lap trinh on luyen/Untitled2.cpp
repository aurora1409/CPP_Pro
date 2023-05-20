#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	long long sum=0,sum1=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			sum1=sum1*j;
		}
		sum+=sum1;
		sum1=1;
	}
	printf("%lld",sum);
	return 0;
}


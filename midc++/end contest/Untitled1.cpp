#include<stdio.h>

int main()
{
	int T,i;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		long long b,p,j,dem=0;
		scanf("%lld%lld",&b,&p);
		for(j=1;j<=b;j++)
		{
			if((j*j)%p==1)
				dem++;
		}
		printf("%lld\n",dem);
	}
	return 0;
}


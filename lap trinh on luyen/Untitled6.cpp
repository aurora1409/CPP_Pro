#include<stdio.h>

long long a[1000000+5]={};
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{	
		long long n,sum=0,res=0;
		scanf("%lld",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(int i=0;i<n;i++)
		{
			sum+=a[i];
			if(res<sum)
				res=sum;
			if(sum<0)
				sum=0;
		}
		printf("%lld\n",res);
	}
	return 0;	
}



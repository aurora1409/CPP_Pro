#include<stdio.h>

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long n;
		scanf("%lld",&n);
		long long a[100005]={},tanso[100005]={};
		long long i;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			tanso[a[i]]++;
		}
		long long x,kt=0;
		for(i=0;i<n;i++)
		{
			if(tanso[a[i]]%2==1)
			{
				kt=1;
				x=a[i];
			}
		}
		if(kt==1) printf("%lld",x);
		printf("\n");
	}
	return 0;
}


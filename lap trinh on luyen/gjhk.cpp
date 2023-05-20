#include<stdio.h>
#include<stdlib.h>

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long n,k;
		scanf("%lld%lld",&n,&k);
		long long a[10000]={};
		for(long long i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);	
		}
		for(long long i=0;i<n-1;i++)
		{
			for(long long j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					int x=a[i];
					a[i]=a[j];
					a[j]=x;
				}
			}
		}
		for( int i=0 ;i<n;i++)
		{
			if(a[i]<0)
			{
				a[i]=llabs(a[i]);
				k--;
			}
		}
		long long min,vt=0;
		if(k>0&&k%2==0)
		{
			min=a[0];
			for (long long i=0; i<n; i++)
			{
				if(a[i]<min)
				{
					min=a[i];
					vt=i;
				}
			}
			a[vt]=llabs(a[vt]);
		}
		long long sum=0;
		for(long long i=0;i<n;i++)
		{
			sum+=a[i];
		}
		printf("%lld\n",sum);
	}
	return 0;
}


#include<stdio.h>
#include<math.h>

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long a,b;
		scanf("%lld%lld",&a,&b);
		long long i,dem=0,demt=0,c=0,d=0;
		for(i=a;i<=b;i++)
		{
			long long j,kt=0;
			for(j=2;j<=sqrt(i);j++)
			{
				if(i%j==0)
				{
					dem++;
					break;
				}
				if(dem==0) kt=1;
			}
			long long sum=0,x,m;
			if(kt=1)
			{
				while(i>0)
				{
					x=i%10;
					sum+=x;
					i/=10;
					long long m,dem2=0;
					for(m=2;m<=sqrt(x);m++)
					{
						if(x%m==0)
						{
							dem2++;
							break;
						}
						if(dem2==0) c=1;
					}
				}
				long long k,dem1=0;
				for(k=2;k<=sqrt(sum);k++)
				{
					if(sum%k==0)
					{
						dem1++;
						break;
					}
					if(dem1==0) d=1;
				}
			}
				if(c==1&&d==1) demt++;
		}
		printf("%lld",demt);
	}
	return 0;
}


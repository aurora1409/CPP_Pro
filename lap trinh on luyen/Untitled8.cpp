#include<stdio.h>

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long n,i,j,a[100000+5]={},b[100000+5]={};
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			b[a[i]]++;
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(b[i]>b[j])
				{
					int x=b[i];
					b[i]=b[j];
					b[j]=x;
				}
				if(a[i]>a[j])
				{
					int x=a[i];
					a[i]=a[j];
					a[j]=x;
				}
			}
		}
		for(i=0;i<100000;i++)
		{	
			if(b[a[i]]>0)
				printf("%d %d ",a[i],b[a[i]]);
		}
	}
	return 0;
}


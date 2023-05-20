#include<stdio.h>
#include<math.h>

long long a[100][100]={};
int max(int a,int b)
{
	int max=a;
	if(max<b) max=b;
	return max; 
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int m,n;
		scanf("%d%d",&m,&n);
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				scanf("%lld",&a[i][j]);
			}
		}
		long long res=0;
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(a[i][j]>0) res++;
				res+=max(a[i][j]-a[i-1][j],0);
				res+=max(a[i][j]-a[i][j+1],0);
				res+=max(a[i][j]-a[i][j-1],0);
				res+=max(a[i][j]-a[i+1][j],0);
			}
		}
		printf("%lld",res);
	}
	return 0;
}


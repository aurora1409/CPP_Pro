#include<stdio.h>

int a[1000000]={};
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n;
		scanf("%d",&n);
		int i,j,x=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
			x=0;
			for(j=i+1;j<n;j++)
			{
				if(a[i]<=a[j]) 
				{
					x=1;
					break;
				}
			}
			if(x==0) printf("%d ",a[i]);
		}
		printf("%d",a[n-1]);
		printf("\n");
	}
	return 0;
}


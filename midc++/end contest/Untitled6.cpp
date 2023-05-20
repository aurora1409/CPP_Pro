#include<stdio.h>

int main()
{
	int T,i,u;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		int a[100000],j;
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i]);
		}
		for(j=0;j<5;j++)
		{
			int x=a[i],y=a[i+1];
		while(a[i]>a[i+1])
		{
			if(a[i]>a[i+1])
			{
				int c=a[i];
				a[i]=a[i+1];
				a[i+1]=c;
			}
			a[i+1]%=a[i];
			a[i]=u;
		}
		printf("%d",(x*y)/u);
		}
		
	}
	return 0;
}


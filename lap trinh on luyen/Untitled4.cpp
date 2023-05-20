#include<stdio.h>

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n;
		scanf("%d",&n);
		int a[100000+5]={},tanso[100000+5]={};
		int i;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			tanso[a[i]]++;
		}
		int x,kt=0;
		for(i=0;i<n;i++)
		{
			if(tanso[a[i]]>n/2)
			{
				kt=1;
				x=a[i];
			}
		}
		if(kt==1) printf("%d",x);
		else printf("NO");
		printf("\n");
	}
	return 0;
}






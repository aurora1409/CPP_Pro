#include<stdio.h>

int main()
{
	int n;
	int a[1000+5]={},tanso[1000+5]={},dem=0;
	while(scanf("%d",&n))
	{
		if(n==0) break;
	int i;
	for(i=0;i<6*n;i++)
	{
		scanf("%d",&a[i]);
	//	if(tanso[a[i]]==0)
	//		dem++;
		tanso[a[i]]++;
	}
	printf("%d\n",dem);
	for(i=0;i<=1000;i++)
	{
		if(tanso[i]>=1) dem++;
			//printf("%d %d\n",i,tanso[i]);
	}
	printf("%d\n",dem);
	}
}

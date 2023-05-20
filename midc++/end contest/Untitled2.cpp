#include<stdio.h>
#include<math.h>

int main()
{
	int T,i;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		int a[100000],j;
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i]);
		}
		int b[100000],x=0,dem=0,dem1=0;
		for(j=0;j<5;j++)
		{
			for(k=1;k<=sqrt(a[i]);k++)
			{
				if(a[i]%k==0)
				{
					while(a[i]%k==0)
					{
						b[x]=k;
						x++;
						dem++;
						a[i]/=k;
					}
				}
			}
		}
		int tanso[100000];
		for(x=0;x<dem;x++)
		{
			if(tanso[b[x]]==0)
				dem1++;
		}
	}
	return 0;
}


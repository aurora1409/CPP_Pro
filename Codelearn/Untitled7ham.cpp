#include<stdio.h>

void sortarray(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				int x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
	}
}
int main()
{
	int a[1000],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sortarray(a,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}


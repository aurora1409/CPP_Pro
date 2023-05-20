#include<stdio.h>

int sumarray(int a[1000], int n)
{
	if(n==1) return a[0];
	return a[n-1]+sumarray(a,n-1);
}
int main()
{
	int n,a[1000];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",sumarray(a,n));
	return 0;
}


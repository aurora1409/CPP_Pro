#include<stdio.h>

int main()
{
	int T;
	scanf("%d",&T);
	while (T--)
	{
		int n;
		scanf("%d",&n);
		printf("%d\n",(n*(n+1))/2);
	}
	return 0;
}


#include<stdio.h>
#include<math.h>

int dc(long long n)
{
	int x=n%10;
	while(n>9)
	{
		n/=10;
	}
	if(x*2==n||n*2==x) return 1;
	else return 0;
}
long long resn(long long n)
{
	long long res=0;
	while(n>0)
	{
		res=res*10+n%10;
		n/=10;
	}
	return res;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		long long x=n/10;
		long long y=resn(x);
		long long z=y/10;
	//	printf("%d %d",z,resn(z));
		if(resn(z)==z&&dc(n)==1) printf("YES\n");
		else printf("NO\n"); 	
	}
	return 0;
}

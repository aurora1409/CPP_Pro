#include<stdio.h>
#include<math.h>

bool check(int n)
{
	if(n<2) return false;
	else if(n<=3) return true;
	else if(n%2==0||n%3==0) return false;
	else
	{
		for(int i=5;i<=sqrt(n);i+=6)
		{
			if(n%i==0||n%(i+2)==0) return false;
		}
		return true;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
//	check(n);
	printf("%d",check(n));
	return 0;
}


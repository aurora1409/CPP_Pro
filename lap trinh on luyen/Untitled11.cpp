#include<stdio.h>
#include<math.h>

bool check(int n)
{
	if(n<2) return false;
	else if(n<=3) return true;
	else if(n%2==0||n%3==0) return false;
	else
	{
		int i;
		for(i=5;i<=sqrt(n);i+=6)
		{
			if(n%i==0||n%(i+2)==0) return false;
		}
		return true;
	}
}
int sum(int n)
{
	int sum=0;
	while(n>0)
	{
		int x=n%10;			
		sum+=x;
		n/=10;
	}
	return sum;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		int i,dem=0;
		for(i=a;i<=b;i++)
		{
			int z=i;
			int x=0,d=0,e=0;
			if(check(z)==1)
			{
				int y=sum(z);
				if(check(y)==1)
				{
					while(z>0)
					{
						x=z%10;
						if(check(x)==1) d++;
						e++;		
						z/=10;
					}
				if(d==e) dem++;
				}
			}	
		}
		printf("%d\n",dem);
	}
	return 0;
}


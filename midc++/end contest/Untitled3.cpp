#include<stdio.h>
#include<math.h>

int main()
{
	double a,b,c,d,e;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	if(a==0&&b==0&&c==0&&d==0&&e==0)
		printf("2001");
	if(a==0&&b==0&&c==0&&d==0&&e!=0)
		printf("0");
	if(a==0&&b==0&&c==0&&d!=0)
	{
		if(e==0)
			printf("1");
			else
				printf("0");
	}
	if(a==0&&b==0&&c!=0)
	{
		int x=d*d-4*e*c;
		if(x<0)
			printf("0");
		else
		{
			if(x=0)
			{
					printf("0");
			}
		}
	}
	if(a!=0&&d==0&&e==0)
	{
		int x=b*b-4*c*a;
		if(x<0)
			printf("1");
		else
		{
			if(x=0)
			{

						printf("1");
				}
		}
	}
	if(a==1&&b==0&&c<0&&d==0)
		printf("2");
	if(a!=0&&b==0&&c==0&&d==0&&e==0)
	{
		printf("1");
	}
	if(a!=0&&b!=0&&c==0&&d==0&&e==0)
		printf("2");
	if(a!=0&&b==0&&c!=0&&d==0&&e==0)
		printf("1");
	if(a==0&&b==0&&c!=0&&d!=0&&e==0)
		printf("2");
	return 0;
}


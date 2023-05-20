#include<stdio.h>
#include<math.h>
#include<string.h>

long long tong(char a[])
{
	long long x=0;
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]-'0'==5) a[i]='6';
	}
	for(int i=0;i<strlen(a);i++) 
		x=x*10+(a[i]-'0');
	return x;
}
long long tong2(char a[])
{
	long long x=0;
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]-'0'==6) a[i]='5';
	}
	for(int i=0;i<strlen(a);i++) 
		x=x*10+(a[i]-'0');
	return x;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[20],b[20];
		scanf("%s",a);
		scanf("%s",b);
//		for(int i=0;i<strlen(a);i++) scanf("%c",a);
//		for(int i=0;i<strlen(b);i++) scanf("%s",b);
		printf("%lld %lld\n",tong2(a)+tong2(b),tong(a)+tong(b));
	}
	
	return 0;
}

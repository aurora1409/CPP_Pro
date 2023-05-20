#include<bits/stdc++.h>

using namespace std;

long long tcs(long long n)
{
	long long sum=0;
	while(n>0)
	{
		int x=n%10;
		sum+=x;
		n/=10;
	}
	return sum;
}
long long tnt(long long n)
{
	long long sum=0;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
			{
				if(i<10) sum+=i;
				else sum+=tcs(i);
				n/=i;
			}
		}
	}
	if(n>1&&n<10) sum+=n;
	if(n>1&&n>=10) sum+=tcs(n);
	return sum;
}
int main()
{
	long long n;
	cin>>n;
	if(tcs(n)==tnt(n)) cout<<"YES";
	else cout<<"NO";	
	return 0;
}


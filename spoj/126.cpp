#include<bits/stdc++.h>

using namespace std;

long long tonguoc(long long n)
{
	long long sum=1;
	if(n==1) return 1;
	else
	{
		for(long long i=2;i<=sqrt(n);i++)
		{
			if(n%i==0) sum+=i;
			int x=n/i;
			if(x!=i&&n%x==0) sum+=x;
		}
		return abs(n-sum);
	}
}
int main()
{
	long long a,b;
	cin>>a>>b;
	long long sum=0;
	for(long long i=a;i<=b;i++) 
		sum+=tonguoc(i);
	cout<<sum;
	return 0;
}


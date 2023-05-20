#include<bits/stdc++.h>

using namespace std;

long long revn(long long n)
{
	long long res=0;
	while(n>0)
	{
		int x=n%10;
		res=res*10+x;
		n/=10;
	}
	return res;
}
int main()
{
	long long n,sum=0;
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		long long x=revn(i);
	//	cout<<x<<" ";
		sum+=pow(x,2);
	}
	cout<<sum;
	return 0;
}


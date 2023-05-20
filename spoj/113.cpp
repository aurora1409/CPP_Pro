#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n;
	cin>>n;
	long long count=0;
	for(long long i=1;i<=n;i++)
	{
		for(long long j=i;j<=n;j++)
		{
			long long x=sqrt(i*i+j*j);
			if(x*x==i*i+j*j&&x<=n) count++;
		}
	}
	cout<<count;
	return 0;
}


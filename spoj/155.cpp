#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long a1,n,sum=0;
	cin>>a1>>n;
	if(n==1) sum+=a1;
//	else if(n==2) sum+=2*a1;
	else
	{
		long long f0=0,f1=1,fn=0;
		for(long long i=2;i<=n;i++)
		{
			fn=(f0+f1)%1000000007;
			f0=f1%1000000007;
			f1=fn%1000000007;
			sum+=a1*f1;
		}
	}
	cout<<sum+3;
	return 0;
}


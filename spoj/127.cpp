#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n;
	cin>>n;
	long long sum1=0,sum2=0,sum;
	if(n%2==0)
	{
		sum1=-(n/2*(1+n-1));
		sum2=n/2*(2+n);
		sum=sum1/2+sum2/2;
	}
	else
	{
		sum1=-((n/2+1)*(1+n));
		sum2=n/2*(2+(n-1));
		sum=sum1/2+sum2/2;
	}
	cout<<sum;
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

unsigned long long gt(unsigned long long n)
{
	unsigned long long x=1;
	for(int i=1;i<=n;i++) x*=i;
	return x;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long n,sum=0,i=0;
		cin>>n;
		while(n>0)
		{
			int x=n%10;
			i++;
			sum+=x*gt(i);
			n/=10;
		}
		cout<<sum<<endl;
	}
	return 0;
}


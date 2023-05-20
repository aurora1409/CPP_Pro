#include<bits/stdc++.h>

using namespace std;

long long bcnn(long long a, long long b)
{
	long long x=a*b;
	while(b!=0)
	{
		int x=a%b;
		a=b;
		b=x;
	}
	return x/a;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long x=1;
		for(int i=2;i<=n;i++)
		{
			x=bcnn(x,i);
			//x=y;
		}
		cout<<x<<endl;
	}
	return 0;
}


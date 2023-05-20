#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n,m;
	cin>>n>>m;
	long long t=1000000000;
	long long x=1;
	for(int i=1;i<=n;i++)
	{
		x*=2;
		x%=t;
	}
	long long y=1;
	for(int i=1;i<=m;i++)
	{
		y*=2;
		y%=t;
	}
	long long S=x+y;
	while(S>9)
	{
		S/=10;
	}
	cout<<S;
	return 0;
}


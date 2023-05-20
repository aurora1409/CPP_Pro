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
	long long x,y;
	cin>>x>>y;
	cout<<bcnn(x,y);
	return 0;
}


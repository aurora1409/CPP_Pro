#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n,m;
	cin>>n>>m;
	long long x=pow(2,n)+pow(3,m);
	while(x>9)
	{
		x/=10;
	}
	cout<<x;
	return 0;
}


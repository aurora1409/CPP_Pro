#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long x,y,p,z=1;
		cin>>x>>y>>p;
		for(int i=1;i<=y;i++)
		{
			z=(z*(x%p))%p;
		}
		cout<<z<<endl;
	}
	return 0;
}


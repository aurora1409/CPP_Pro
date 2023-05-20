#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double n,l,m;
		cin>>n>>l>>m;
		double z=n*(1+l/100);
		int d=1;
		while(z<m)
		{
			z*=(1+l/100);
			d++;
		}
		cout<<d<<endl;
	}
	return 0;
}


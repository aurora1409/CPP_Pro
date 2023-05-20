#include<bits/stdc++.h>

using namespace std;

long long bcnn(int i)
{
	int n;
	int x=i+1;
	while(i+1<=n)
	{
		long long d=1LL*i*(i+1);
		while(i>0)
		{
			if(i<i+1) swap(i,x);
			i%=(i+1);
		}
		return bcnn(i+1);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i=0;
		cin>>n;
		long long d=bncc(1);
		cout<<d<<endl;
	}
	return 0;
}


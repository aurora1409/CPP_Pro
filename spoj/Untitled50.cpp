#include<bits/stdc++.h>

using namespace std;

int ucln(int a, int b)
{
	while(b!=0)
	{
		int x=a%b;
		a=b;
		b=x;
	}
	return a;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,y=10000;
		cin>>n;
		int a[n]={};
		long long x=1,z=1;
		for(int i=0;i<n;i++) 
		{
			cin>>a[i];
			x*=a[i];
			y=ucln(y,a[i]);
		}
		//cout<<y<<" ";
		for(int i=1;i<=y;i++)
		{
			z*=x;
			z=z%(1000000007);
		}
		cout<<z<<endl;
	}
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

unsigned long long bcnn(unsigned long long a, unsigned long long b)
{
	unsigned long long x=a*b;
	while(b!=0)
	{
		unsigned long long x=a%b;
		a=b;
		b=x;
	}
	return x/a;
}
int dcs(unsigned long long n)
{
	int count=0;
	while(n>0)
	{
		count++;
		n/=10;
	}
	return count;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long a[3]={};
		for(int i=0;i<3;i++) cin>>a[i];
		int n;
		cin>>n;
		unsigned long long x=1,d=0;
		for(int i=0;i<3;i++)
			x=bcnn(x,a[i]);
		unsigned long long y;
		for(int i=1;i<=100000;i++)
		{
			y=x;
			y*=i;
		//	cout<<y<<" ";
			if(dcs(y)==n)
			{
				cout<<y;
				break;
			}
			if(dcs(y)>n)
			{
				d=1;
				break;
			}
		}
		if(d==1) cout<<"-1";
		cout<<endl;
	}
	return 0;
}


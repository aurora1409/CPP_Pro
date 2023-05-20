#include<bits/stdc++.h>

using namespace std;

bool checkp(int x)
{
	if(x<2) return 0;
	else
	{
		for(int i=2;i<=sqrt(x);i++)
		{
			if(x%i==0) return 0;
		}
	}
	return 1;
}
int sumdgs(int x)
{
	int sum=0;
	while(x>0)
	{
		sum+=x%10;
		x/=10;
	}
	return sum;
}
long long dequy(int x)
{
	if(x==1) return 1;
	else if(checkp(x)) return sumdgs(x);
	else
	{
		long long res=1;
//C1:	for(int i=2;i<x;i++)
//		{
//			if(x%i==0) res*=dequy(i);
//		}
//C2:	for(int i=2;i<=sqrt(x);i++)
//		{
//			if(x%i==0) res=res*dequy(i)*dequy(x/i);
//		}
//		if(sqrt(x)*sqrt(x)==x) res/=dequy(x/sqrt(x));
		for(int i=2;i<=sqrt(x);i++)
		{
			if(x%i==0)
			{
				res*=dequy(i);
				if(x/i!=i) res*=dequy(x/i);
			}
		}
		return res;
	}
}
int main()
{
	int x;
	cin>>x;
	cout<<dequy(x);
	return 0;
}


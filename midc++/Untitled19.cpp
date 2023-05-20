#include<bits/stdc++.h>

using namespace std;
bool checkp(int x)
{
	if(x<2) return 0;
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0) return 0;
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
long long sum(int x)
{
	if(x==1) return 1;
	else if(checkp(x)==1) return sumdgs(x);
	else 
	{
		long long sum1=1;
		for(int i=2;i<x;i++)
		{
			if(x%i==0) sum1*=sum(i);
		}
		return sum1;
	}	
}
int main()
{
	int x;
	cin>>x;
	cout<<sum(x);
	return 0;
}


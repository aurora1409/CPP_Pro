#include<bits/stdc++.h>

using namespace std;

bool snt(int n)
{
	if(n<2) return 0;
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0) return 0;
		}
	}
	return 1;
}
int sumdg(int n)
{
	int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int t=n;
		if(snt(n)==1) cout<<"NO"<<endl;
		else
		{
			int sum=0;
			for(int i=2;i<=n;i++)
			{
				if(n%i==0)
				{
					while(n%i==0) 
					{
						sum+=sumdg(i);
						n/=i;
					}
				}
			}
			if(n>1) sum+=n; 
			if(sum==sumdg(t)) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
	return 0;
}


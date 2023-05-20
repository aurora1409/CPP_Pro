#include<bits/stdc++.h>

using namespace std;

long long tonguoc(int n)
{
	long long sum=0;
	for(int i=2;i<=sqrt(n)+10;i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
			{
				sum+=i;
				n/=i;
			}
		}
	}
	if(n>1) sum+=n;
	return sum;
}
int main()
{
	int n;
	long long sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		sum+=tonguoc(x);
	}
	cout<<sum;
	return 0;
}


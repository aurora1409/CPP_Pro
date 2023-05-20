#include<bits/stdc++.h>

using namespace std;

long long sum[1000005];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int n1;
		cin>>n1;
		sum[i]=sum[i-1]+n1;
	}
	long long sum1=0;
	if(sum[n]%3==0)
	{
		int count=0;
		for(int i=n-1;i>0;i--)
		{
			if(sum[i]==sum[n]/3) sum1+=count;
			if(sum[i]==sum[n]/3*2) count++;
		}
	}
	cout<<sum1;
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>i;
		unsigned long long n,sum,count=0;
		cin>>n;
		cout<<i<<" ";
		for(int i=1;i<1000;i++)
		{
			for(int j=i+1;j<1000000;j++)
			{
				sum+=j;
				//cout<<sum;
				if(sum==n)
				{
					count++;
					break;
				}
				if(sum>n) break;
			}
			sum=0;
		}
		cout<<count<<endl;
	}
	return 0;
}


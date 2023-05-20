#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	cin>>x;
	while(x--)
	{
		int n,t,count=0;
		cin>>n>>t;
		int a[n]={};
		for(int i=0;i<n;i++) cin>>a[i];
		long long sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=a[i];
			count++;
			if(sum>t)
			{
				count--;
				break;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+5]={},ts[10000]={};
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			ts[a[i]]++;
		}
		int max=0,i=0;
		for(int i=0;i<1001;i++)
		{
			if(ts[i]<=ts[i+1])
			{
				max=ts[i+1];
				i=i+1;
			}
		}
		cout<<i<<endl;
	}
	return 0;
}


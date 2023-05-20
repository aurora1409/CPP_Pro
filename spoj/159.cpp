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
		int a[n]={},ts[1005]={};
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			ts[a[i]]++;
		}
		int max=0,j;
		for(int i=1;i<=1000;i++)
		{
			if(ts[i]>max)
			{
				max=ts[i];
				j=i;
			}
		}
		cout<<j<<endl;
	}
	return 0;
}


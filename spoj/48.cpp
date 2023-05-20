#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n]={},sum=0;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=2;j<=sqrt(a[i]);j++)
		{
			if(a[i]%j==0)
			{
				while(a[i]%j==0)
				{
					sum+=j;
					a[i]/=j;
				}
			}
		}
		if(a[i]>1) sum+=a[i];
	}
	cout<<sum;
	return 0;
}


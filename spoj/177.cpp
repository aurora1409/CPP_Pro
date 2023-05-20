#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x=1;
		cin>>n;
		int a[n]={};
		cin>>a[0];
		int k=a[0];
		for(int i=1;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>k) k=a[i];
		}
		for(int i=2;i<k;i++)
		{
			int p=1,z=a[0]%i;
			for(int j=1;j<n;j++)
			{
				if(a[j]%i!=z)
				{
					p=0;
					break;
				}
			}
			x+=p;
		}
		cout<<x<<endl;
	}
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,sum=0;
	cin>>n;
	int a[n]={};
	vector <int> b;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	if(sum%2==1) cout<<sum;
	else
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]%2==1)
			{
				b.push_back(a[i]);
			}
		}
		sort(b.begin(),b.end());
		if(b.size()!=0) cout<<sum-b[0];
		else cout<<"0";
	}
	return 0;
}


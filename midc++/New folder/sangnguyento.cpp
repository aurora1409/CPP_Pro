#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	bool a[10005]={};
	for(int i=2;i<=n;i++) a[i]=1;
	for(int i=2;i*i<=n;i++)
	{
		if(a[i]==1)
		for(int j=i*i;j<=n;j+=i)
		{
			a[j]=0;
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(a[i]==1) cout<<i<<" ";
	}
	return 0;
}

//cho mot so tim so uoc cua so do

#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n,k,count=0;
	cin>>n>>k;
	long long a[n]={};
	for(long long i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	if(k==0)
	{
		if(a[0]==1) cout<<"-1";
		else cout<<"1";
	}
	else
	{
		long long res=a[k-1];
		for(long long i=0;i<n;i++)
			if(a[i]<=res) count++;
		if(count!=k) cout<<"-1";
		else cout<<a[k-1];
	}
	//if(a[k-1]!=a[k]) cout<<a[k-1];
	//else cout<<"-1";
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,d=0;
	cin>>n;
	int a[3005]={};
	for(int i=1;i<=3000;i++) a[i]=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a[x]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]==0) 
		{
			d=1;
			cout<<i;
			break;
		} 
	}
	if(d==0) cout<<n+1;
	return 0;
}


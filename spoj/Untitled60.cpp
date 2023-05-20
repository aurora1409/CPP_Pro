#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n]={},count=0;
	for(int i=0;i<n;i++) cin>>a[i];
	int max=0,l=0,min=1000,r=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			l=i;
		}
		if(a[i]<=min)
		{
			min=a[i];
			r=i;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==min) count++;
	}
	if(count>1&&l>r) cout<<l+n-1-r-1;
	else cout<<l+n-1-r;
	return 0;
}


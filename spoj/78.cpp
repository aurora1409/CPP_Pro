#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,count=0;
	cin>>n;
	int a[n]={},ts[5005]={};
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) 
		if(ts[a[i]]==0) ts[a[i]]++;
	for(int i=1;i<=n;i++)
		if(ts[i]>=1) count++;
	cout<<n-count;
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int a[n]={};
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	if(a[k-1]!=a[k]) cout<<a[k-1];
	else cout<<"-1";
	return 0;
}


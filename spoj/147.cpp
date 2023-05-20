#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int a[55]={};
	for(int i=1;i<=m;i++) cin>>a[i];
	sort(a+1,a+m+1);
	int hieu=2000;
	for(int i=1;i<=m-n+1;i++)
	{
		if(a[i+n-1]-a[i]<hieu) hieu=a[i+n-1]-a[i];
	}
	cout<<hieu;
	return 0;
}


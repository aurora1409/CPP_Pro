#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int a[n]={},b[m]={};
	for(int i=0;i<n;i++) cin>>a[i];
	for(int j=0;j<m;j++) cin>>b[j];
	sort(a,a+n);
	int count=0;
	for(int i=0;i<m;i++)
	{
		count=0;
		for(int j=0;j<n;j++)
		{
			if(b[i]>=a[j]) count++;
		}
		cout<<count<<endl;
	}
	return 0;
}


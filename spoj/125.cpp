#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n]={},b[m]={};
		for(int i=0;i<n;i++) cin>>a[i];
		for(int j=0;j<m;j++) cin>>b[j];
		if(n>m) cout<<"No";
		else cout<<"Yes";
		cout<<endl;
	}
	return 0;
}


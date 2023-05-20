#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n,m,x,y;
	cin>>n>>m;
	long long a[n*2][n*2];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++) cin>>a[i][j];
	cin>>x>>y;
	for(int i=0;i<n;i++)
		for(int j=n;j<n*2;j++) a[i][j]=a[i][n*2-1-j];
	for(int i=n;i<n*2;i++)
		for(int j=0;j<n*2;j++) a[i][j]=a[n*2-1-i][j];
	x=(x-1)%(n*2);
	y=(y-1)%(n*2);
	cout<<a[x][y];
	return 0;
}


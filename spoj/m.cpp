#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n,m,x,y;
	long long a[n*2][n*2];
	cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++) cin>>a[i][j];
	cin>>x>>y;
	for(int i=0;i<n;i++)
		for(int j=n;j<2*n;j++) a[i][j]=a[i][2*n-1-j];
	for(int i=n;i<2*n;i++)
		for(int j=0;j<2*n;j++) a[i][j]=a[2*n-1-i][j];
	x=(x-1)%(2*n);
	y=(y-1)%(2*n);
	cout<<a[x][y];
	return 0;
}


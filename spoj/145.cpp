#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a[24][60]={},n;
	cin>>n;
	for(int i=0;i<=23;i++)
		for(int j=0;j<60;j++)
			a[i][j]=0;
	int res=0;
	for(int i=1;i<=n;i++)
	{
		int x,y;
		cin>>x>>y;
		a[x][y]++;
		res=max(res,a[x][y]);
	}
	cout<<res;
	return 0;
}


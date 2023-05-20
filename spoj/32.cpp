#include<bits/stdc++.h>

using namespace std;

int main()
{
	int r,c;
	cin>>r>>c;
	char a[r+5][c+5]={};
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++) cin>>a[i][j];
	int count=0;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(a[i][j]=='#')
			{
				count++;
				break;
			}
		}
	}
	cout<<count;
	return 0;
}


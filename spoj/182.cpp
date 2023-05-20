#include<bits/stdc++.h>

using namespace std;

int main()
{
	char a[4][4]={};
	int d=0;
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			cin>>a[i][j];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(a[i][j]==a[i+1][j]&&a[i+1][j]==a[i][j+1]&&a[i][j+1]==a[i+1][j+1])
			{
				d=1;
			//	cout<<"YES";
				break;
			}
			else if((a[i][j]=='#'&&a[i][j+1]=='#'&&a[i+1][j]=='#'&&a[i+1][j+1]=='.')
					||(a[i][j]=='.'&&a[i][j+1]=='.'&&a[i+1][j]=='.'&&a[i+1][j+1]=='#')
					||(a[i][j]=='#'&&a[i][j+1]=='#'&&a[i+1][j]=='.'&&a[i+1][j+1]=='#')
					||(a[i][j]=='.'&&a[i][j+1]=='.'&&a[i+1][j]=='#'&&a[i+1][j+1]=='.')
					||(a[i][j]=='#'&&a[i][j+1]=='.'&&a[i+1][j]=='#'&&a[i+1][j+1]=='#')
					||(a[i][j]=='.'&&a[i][j+1]=='#'&&a[i+1][j]=='.'&&a[i+1][j+1]=='.')
					||(a[i][j]=='.'&&a[i][j+1]=='#'&&a[i+1][j]=='#'&&a[i+1][j+1]=='#')
					||(a[i][j]=='#'&&a[i][j+1]=='.'&&a[i+1][j]=='.'&&a[i+1][j+1]=='.'))
			{
				d=1;
			//	cout<<"YES";
				break;
			}
			if(d==1) break;
		}
	}
	if(d==0) cout<<"NO";
	else cout<<"YES";
	return 0;
}


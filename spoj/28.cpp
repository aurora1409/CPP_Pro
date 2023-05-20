#include<bits/stdc++.h>

using namespace std;

int a[1000][1000];
int m,n,min=0;
int sum=0;
int main()
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++) cin>>a[i][j];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[i][j]>a[i][j+1])
				sum=sum+(a[i][j]-a[i][j+1]);
		}
		sum=sum+a[i][n-1];
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[i][j]<a[i][j+1])
				sum=sum+(a[i][j+1]-a[i][j]);
		}
		sum=sum+a[i][0];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m-1;j++)
		{
			if(a[j][i]>a[j+1][i])
				sum=sum+(a[j][i]-a[j+1][i]);
		} 
		sum=sum+a[m-1][i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m-1;j++)
		{
			if(a[j][i]<a[j+1][i])
				sum=sum+(a[j][i]-a[j+1][i]);
		}
		sum=sum+a[0][i];
	}
	return 0;
}


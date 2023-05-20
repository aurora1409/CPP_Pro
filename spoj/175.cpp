#include<bits/stdc++.h>

using namespace std;

bool check(int k,int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(a[i]%k!=a[i+1]%k) return 0;
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0;
		cin>>n;
		int a[n]={};
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=1;i<=100000;i++)
		{
			if(check(i,a,n)==1) count++;
		}
		cout<<count<<endl;
	}
	return 0;
}


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
    	int a[n];
    	int sum=0,sum1=0;
    	for(int i=0;i<n;i++) cin>>a[i];
    	for(int i=0;i<n-2;i++)
    	{
        	for(int j=i+1;j<n-1;j++)
        	{
            	for(int k=j+1;k<n;k++)
            	{
                	sum1=a[i]+a[j]+a[k];
                	if(sum1<=m&&sum1-sum>0) sum=sum1;
            	}
       		}
       	}
    	cout<<sum<<endl;
	}
	return 0;
}


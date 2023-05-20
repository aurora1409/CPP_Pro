#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int b[n]={};
	for(int i=1;i<=n;i++) cin>>b[i];
	if(n==1) cout<<b[1];
	else
	{
		for(int i=0;i<n;i++)
		{
			//if(i==1) cout<<b[1]<<" ";
			//else if(i==2) cout<<b[2]*2-b[1]<<" ";
			cout<<b[i+1]*(i+1)-b[i]*i<<" ";
		}
	}
	return 0;
}


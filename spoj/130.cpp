#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d=0;
		cin>>n;
		int a[100005]={};
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]==a[j]) 
				{
					d=1;
					cout<<a[i];
					break;
				}
			}
			if(d==1) break;
		}
		if(d==0) cout<<"NO";
		cout<<endl;
	}
	return 0;
}


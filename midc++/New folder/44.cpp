#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0) break;
		int count=0;
		int a[n]={};
		for(int i=0;i<n;i++) cin>>a[i];
		int i=0;
		while(a[i]!=a[i+1])
		{
			int x;
			if(i==0) x=a[i];
			if(i!=n-1) a[i]=abs(a[i]-a[i+1]);
			else a[i]=abs(x-a[i]);
			//if(i==n) count++;
			if(count>1000)
			{
				count=0;
				break;
			}
			cout<<a[i]<<" ";
			i++;
			if(i==n)
			{
				i=0;
				cout<<endl;
			}
		}
	//	cout<<count<<endl;
	}
	return 0;
}


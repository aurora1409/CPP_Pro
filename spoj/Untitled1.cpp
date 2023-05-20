#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n]={};
	for(int i=0;i<n;i++) cout<<a[i]; cout<<endl;
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]==0)
		{
			a[i]=1;
			int j;
			for(j=i+1;j<n;j++) a[j]=0;
			for(j=0;j<n;j++) cout<<a[j]; cout<<endl;
			i=n;
		}
	}
	return 0;
}


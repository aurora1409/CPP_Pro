#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n+1;i++)
	{
		for(int l=1;l<=n+1-i;l++) cout<<"  ";
		for(int j=0;j<i;j++) cout<<j<<" ";
		if(i!=1) 
			for(int k=i-2;k>=0;k--) cout<<k<<" ";
		cout<<endl;
	}
	for(int i=n;i>=1;i--)
	{
		for(int l=1;l<=n+1-i;l++) cout<<"  ";
		for(int j=0;j<i;j++) cout<<j<<" ";
		if(i!=1) 
			for(int k=i-2;k>=0;k--) cout<<k<<" ";
		cout<<endl;
	}
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
		for(int j=n/2;j>=1;j--)
		{
			for(int k=1;k<=j;k++) cout<<"*";
			for(int k=1;k<=n-2*j;k++) cout<<"D";
			for(int k=1;k<=j;k++) cout<<"*";
			cout<<endl;
		}
		
	//	cout<<endl;
		for(int j=1;j<=n;j++) cout<<"D";
		cout<<endl;
		for(int j=1;j<=n/2;j++)
		{
			for(int k=1;k<=j;k++) cout<<"*";
			for(int k=1;k<=n-2*j;k++) cout<<"D";
			for(int k=1;k<=j;k++) cout<<"*";
			cout<<endl;
		}
		
//	}
	return 0;
}


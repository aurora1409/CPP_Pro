#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n]={},ts[(int)1e5+5]={};
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			ts[a[i]]++;
		}
		int d=0;
		for(int i=0;i<=100000;i++)
		{
			if(ts[a[i]]>1)
			{
				d=1;
				cout<<a[i];
				break;
			}
		}
		if(d==0) cout<<"NO";
		cout<<endl;
	}
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string n;
		cin>>n;
		long long m;
		cin>>m;
		long long res=0;
		for(int i=0;i<n.size();i++)
		{
			int x=res*10+(n[i]-'0');
			res=x%m;
		}
		cout<<res<<endl;
	}
	return 0;
}


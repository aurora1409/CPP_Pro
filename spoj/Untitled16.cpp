#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>i;
		cout<<i<<" ";
		int r;
		cin>>r;
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			int d=0;
			while(d<r)
			{
				cout<<s[i];
				d++;
			}
		}
		cout<<endl;
	}
	return 0;
}


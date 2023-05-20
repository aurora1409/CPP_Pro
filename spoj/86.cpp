#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		int res=0;
		for(int i=0;i<a.size();i++)
		{
			int x=res*10+(a[i]-'0');
			res=x%36;
		}
		if(res==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

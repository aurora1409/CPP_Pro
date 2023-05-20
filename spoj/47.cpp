#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int res=0;
		for(int i=0;i<s.size();i++)
		{
			int x=res*10+(s[i]-'0');
			res=x%4;
		}
		if(res%4==0) cout<<"4"<<endl; 
		else cout<<"0"<<endl;
	}
	return 0;
}


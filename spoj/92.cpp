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
		for(int i=0;i<s.size();i++)
		{
			int x=s[i]-'0';
			int y=9-(s[i]-'0');
			if(x>y&&x!=9) s[i]=y+'0';
			else s[i]=x+'0';
		}
		cout<<s<<endl;
	}
	return 0;
}


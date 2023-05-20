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
		//cout<<s[s.size()-1];
		if(s[s.size()-1]-'0'==6&&s[s.size()-2]-'0'==8) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
	return 0;
}


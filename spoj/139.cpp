#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	if(s=="12:00:00PM") cout<<"12:00:00";
	else if(s=="00:00:00AM") cout<<"00:00:00";
	else
	{
		if(s[8]=='A') 
		{
			for(int i=0;i<s.size()-2;i++) cout<<s[i];
		}
		else
		{
			int s1=s[0]-'0'+s[1]-'0';
			int x2=s1+12;
			cout<<x2;
			for(int i=2;i<s.size()-2;i++)
			{
				cout<<s[i];
			}
		}
	}
	return 0;
}


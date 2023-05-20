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
		int d=0;
		for(int i=0;i<s.size();i++)
		{
			if(((s[i]-'0')%2==0&&i%2==0)||((s[i]-'0')%2==1&&i%2==1))
			{
				cout<<"NO";
				d=1;
				break;
			}
		}
		if(d==0) cout<<"YES";
		cout<<endl;
	}
	return 0;
}


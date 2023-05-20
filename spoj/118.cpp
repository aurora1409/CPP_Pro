#include<bits/stdc++.h>

using namespace std;

int main()
{
	string a,b;
	int k=0;
	while(cin>>a>>b)
	{
		if(a=="END"&&b=="END") break;
		string s= "abcdefjhijklmnopqrstuvwxyz";
		vector <char> c;
		vector <char> d;
		for(int i=0;i<s.size();i++)
			for(int j=0;j<a.size();j++)
				if(s[i]==a[j])
					c.push_back(s[i]);
		for(int i=0;i<s.size();i++)
			for(int j=0;j<b.size();j++)
				if(s[i]==b[j])
					d.push_back(s[i]);
		k++;
		cout<<"Case "<<k<<": ";
		if(c.size()!=d.size()) cout<<"different";
		else
		{
			int e=0;
			for(int i=0;i<c.size();i++)
			{
				if(d[i]!=c[i])
				{
					e=1;
					cout<<"different";
					break;
				}
			}
			if(e==0) cout<<"same";
		}
		cout<<endl;
	}
	return 0;
}


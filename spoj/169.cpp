#include<bits/stdc++.h>

using namespace std;

bool check(char c, vector <char> s)
{
	for(int i=0;i<s.size();i++)
	{
		if(c==s[i]) return 0;
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		int ts[100005]={};
		for(int i=0;i<s.size();i++)
			if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
		for(int i=0;i<s.size();i++)
		{
			for(char j='a';j<='z';j++)
			{
				if(s[i]==j) ts[s[i]]++;
			}
		}
		int sum=0;
	//	for(int i=0;i<s.size();i++)
	//		if(ts[s[i]]>1) //sum+=ts[s[i]];
		vector <char> a;
	//	vector <char> b;
		for(int i=0;i<s.size();i++)
		{
			if(ts[s[i]]>0&&check(s[i],a)==1)
			{
				a.push_back(s[i]);
				if(ts[s[i]]>1) sum+=ts[s[i]];
			}
		}
		cout<<sum<<" ";
		for(int i=0;i<a.size();i++) cout<<a[i];
		cout<<endl;
	}
	return 0;
}


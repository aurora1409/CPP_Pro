#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	char s[105];
	for(int i=0;i<n;i++) cin>>s[i];
	long long ts[100005]={};
	for(int i=0;i<n;i++)
	{
		if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
	}
	string str= "abcdefjhijklmnopqrstuvwxyz";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<str.size();j++)
		{
			if(s[i]==str[j]) ts[str[j]]++;
		}
	}
	int oop=0;
	for(int i=0;i<26;i++)
	{
		if(ts[str[i]]==0)
		{
			oop=1;
			cout<<"NO";
			break;
		}
	}
	if(oop==0) cout<<"YES";
	return 0;
}


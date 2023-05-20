#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='a'&&s[i]<='z') s[i]-=32;
	}
	int ts[1000]={};
	string a= "ABCDEFGHIJKLMNOPQRSTUVXYZW";
	for(int i=0;i<s.size();i++)
	{
		for(int j=0;j<a.size();j++)
		{
			if(s[i]==a[j]) ts[a[j]]++;
		}
	}
	for(int i=0;i<26;i++)
	{
		if(ts[a[i]]>0) cout<<a[i]<<" "<<ts[i]<<endl;
	}
	
	return 0;
}


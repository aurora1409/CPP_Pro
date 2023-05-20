#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector <string> s(100);
	string s1;
	getline(cin,s1);
	int j=0;
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]!=' ') s[j].push_back(s1[i]);
		else if(s1[i-1]!=' ') j++;
	}
	if(s1[s1.size()-1]!=' ') j+=1;
	for(int i=j-1;i>=0;i--)
	{
		cout<<s[i]<<" ";
	}
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector <string> s;
	string s1;
	for(int i=0;i<s.size();i++)
	{
		cin>>s1;
		s.push_back(s1);
		if(i!=s.size()-1) s.push_back(" ");
	}
	for(int i=s.size()-1;i>=0;i--)
	{
		cout<<s[i];
	}
	//a.pop_back();
	return 0;
}


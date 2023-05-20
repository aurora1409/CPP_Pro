#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	char s1[]="-";
	for(int i=0;i<s.size();i++)
		s.erase(remove(s.begin(),s.end(),s1[i]),s.end());
	cout<<s;
	return 0;
}


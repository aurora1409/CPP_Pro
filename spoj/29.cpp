#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	int count1=0,count2=0;
	for(int i=0;i<s.size()-1;i++) 
		if(s[i]==')'&&s[i+1]==')') count1++;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='('&&s[i+1]=='(') count2+=count1;
		if(s[i]==')'&&s[i+1]==')') count1--;
	}
//	cout<<count1<<" "<<count2<<" ";
	cout<<count2;
	return 0;
}


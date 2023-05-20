#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	string res;
	for(int i=0;i<s.size();i++)
	{
		if(i%3==2) res=res+s[i]+',';
		else res=res+s[i];
	}
	res.erase(res.end()-1);
	cout<<res;
	return 0;
}


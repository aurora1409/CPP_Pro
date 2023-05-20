#include<bits/stdc++.h>

using namespace std;

string s;
void kb()
{
	cin>>s;
}
void solve()
{
	int d=-1;
	for(int i=s.size()-1;i>=0;i--)
		if(s[i]=='0') d=i;
	if(d!=-1) s.erase(s.begin()+d,s.begin()+d+1);
	else s.erase(s.begin(),s.begin()+1);
	cout<<s;
}
int main()
{
	kb();
	solve();
	return 0;
}


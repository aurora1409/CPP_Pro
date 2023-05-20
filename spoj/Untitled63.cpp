#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	long long x=1;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='0') x*=2;
		else if(s[i]=='1') x*=6;
		else if(s[i]=='2') x*=2;
		else if(s[i]=='3') x*=3;
		else if(s[i]=='4') x*=3;
		else if(s[i]=='5') x*=3;
		else if(s[i]=='6') x*=2;
		else if(s[i]=='7') x*=5;
		else if(s[i]=='8') x*=1;
		else if(s[i]=='9') x*=2;
	}
	cout<<x;
	return 0;
}


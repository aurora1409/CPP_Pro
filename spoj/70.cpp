#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	while(cin>>s)
	{
	//	if(s=="") break;
		int count=0;
		int a[26]={};
		for(int i=0;i<s.size();i++) a[s[i]-'a']++;
		for(int i=0;i<26;i++)
			if(a[i]%2==1) count++;
		if(count<2||count%2==1) cout<<"First";
		else cout<<"Second";
		cout<<endl;
	}
	return 0;
}


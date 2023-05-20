#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s1="abcdifjhijklmnopqrstuvwxyz";
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector <string> a;
		for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
//			vector <string> b;
//			for(int j=0;j<b.size();j++)
//			{
//				char x;
//				cin>>x;
//			}	
			for(int j=0;j<26;j++)
			{
			//	for(int k=0;k<s.size();k++)
			//	{
					if(s1[j]==s[0]) a.push_back(s);
			//	}
			}
		}
//		for(int i=0;i<n;i++)
//		{
//		}
		for(int i=0;i<a.size();i++) cout<<a[i];
		cout<<endl;
	}
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int count;
		for(int i=0;i<s.size();)
		{
			count=1;
			for(int j=i+1;j<s.size();j++)
			{
				if(s[i]==s[j])
				{
				//while(s[i]==s[i+1])
					count++;
				//	i++;
				}
				else break;
			}
			cout<<count<<s[i];
			int x=count;
			i=i+x;
		}
		cout<<endl;
	}
	return 0;
}


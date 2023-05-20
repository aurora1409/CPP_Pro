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
		if(s=="0") cout<<"0";
		else
		{
			long long sum=0;
			for(int i=0;i<s.size();i++)
			{
				sum+=s[i]-'0';
			}
		//	cout<<sum<<" ";
			if(sum%9==0) cout<<"1";
			else cout<<"0";
		}
		cout<<endl;
	}
	return 0;
}


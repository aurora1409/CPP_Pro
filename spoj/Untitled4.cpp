#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	while(cin>>s)
	{
		if(s[0]=='#') break;
		int count1=0,count2=0,count3=0,count4=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='Y') count1++;
			else if(s[i]=='N') count2++;
			else if(s[i]=='P') count3++;
			else count4++;
		}
		//cout<<s.size()/2<<endl;
		if(count4>=(float)s.size()/2) cout<<"need quorum";
		else
		{
			if(count1>count2) cout<<"yes";
			else if(count1<count2) cout<<"no";
			else cout<<"tie";
		}
		cout<<endl;
	}
	return 0;
}


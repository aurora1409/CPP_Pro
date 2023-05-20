#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>i;
		cout<<i<<" ";
		string s;
		cin>>s;
		int vt=-1;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]<s[i+1])
			{
				vt=i;
				break;
			}
		}
		if(vt==-1) cout<<"BIGGEST";
		int vt1=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>s[vt])
			{
				vt1=i;
				break;
			}
		}
		swap(vt,vt1);
		for(int i=0;i<vt;i++) cout<<s[i];
		for(int i=s.size()-1;i>=vt;i--) cout<<s[i];
		cout<<endl;
	}
	return 0;
}


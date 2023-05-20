#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	int max=0,l=0,r=0,lmax=0,rmax=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='L')
		{
			l++;
			lmax++;
			if(lmax-r>max) max=lmax-r;
		}
		else if(s[i]=='R')
		{
			r++;
			rmax++;
			if(rmax-l>max) max=rmax-l;
		}
		else
		{
			lmax++;
			if(lmax-r>max) max=lmax-r;
			rmax++;
			if(rmax-l>max) max=rmax-l;
		}
	}
	cout<<max;
	return 0;
}


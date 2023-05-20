#include<bits/stdc++.h>

using namespace std;

int chuyen(string s)
{
	int res=0;
	for(int i=0;i<s.size();i++)
	{
		res=res*10+(s[i]-'0');
	}
	return res;
}
int main()
{
	string s1,s2,s3;
	int d=0;
	cin>>s1>>s2>>s3;
	for(int i=0;i<s1.size();i++)
		if(s1[i]=='?')
		{
			d=1;
			break;
		}
	for(int i=0;i<s2.size();i++)
		if(s2[i]=='?')
		{
			d=2;
			break;
		}
	for(int i=0;i<s3.size();i++)
		if(s3[i]=='?')
		{
			d=3;
			break;
		}
	if(d==1)
	{
		vector <int> a;
		int y=chuyen(s2);
		int z=chuyen(s3);
		int x=z-y;
		while(x>0)
		{
			int t=x%10;
			a.push_back(t);
			x/=10;
		}
		for(int i=0,j=a.size()-1;i<s1.size(),j>=0;i++,j--)
		{
			if(s1[i]!=a[j]+'0')
			{
				s1[i]=a[j]+'0';
				cout<<s1[i];
				break;
			}
		}
//		for(int i=0;i<s1.size();i++) cout<<s1[i];
	}
	else if(d==2)
	{
		vector <int> a;
		int x=chuyen(s1);
		int z=chuyen(s3);
		int y=z-x;
		while(y>0)
		{
			int t=y%10;
			a.push_back(t);
			y/=10;
		}
		for(int i=0,j=a.size()-1;i<s2.size(),j>=0;i++,j--)
		{
			if(s2[i]!=a[j]+'0')
			{
				s2[i]=a[j]+'0';
				cout<<s2[i];
				break;
			}
		}
//		for(int i=0;i<s2.size();i++) cout<<s2[i];
	}
	else
	{
		vector <int> a;
		int x=chuyen(s1);
		int y=chuyen(s2);
		int z=x+y;
		while(z>0)
		{
			int t=z%10;
			a.push_back(t);
			z/=10;
		}
		for(int i=0,j=a.size()-1;i<s3.size(),j>=0;i++,j--)
		{
			if(s3[i]!=a[j]+'0')
			{
				s3[i]=a[j]+'0';
				cout<<s3[i];
				break;
			}
		}
	}
	return 0;
}


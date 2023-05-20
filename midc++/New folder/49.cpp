#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	int d=0;
	for(int i=0;i<s.size()-2;i++)
	{
		string s1="";
		s1=s1+s[i];
		if(s1=="1")
		{
			i++;
			d=1;
		}
		for(int j=i+1;j<s.size()-1;j++)
		{
			s1=s1+s[j];
			if(s1=="14") 
			{
				i++;
				j++;
				d=1;
			}
			for(int k=j+1;k<s.size();k++)
			{
				s1=s1+s[k];
				if(s1=="144") 
				{
					i++;
					j++;
					k++;
					d=1;
				}
			}
		}
	}
	if(d==1) cout<<"YES";
	else cout<<"NO";
	return 0;
}


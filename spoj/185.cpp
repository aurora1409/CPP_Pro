#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	int d=0;
	string s1="1";
	string s2="14";
	string s3="144";
	string s4;
	for(int i=0;i<s.size()-3;i++)
	{
//		if(s[i]=='1'||(s[i]=='1'&&s[i+1]=='4')||(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4'))
//			d=1;
//		else d=0;
//		if(d==0)
//		{
//			cout<<"NO";
//			break;
//		}
		s4="";
		s4=s4+s[i];
		if(s4==s1)
		{
			i++;
			d=1;
		}
		else
		{
			s4=s4+s[i]+s[i+1];
			if(s4==s2)
			{
				d=1;
				i+=2;
			}
			else
			{
				s4=s4+s[i]+s[i+1]+s[i+3];
				if(s4==s3)
				{
					d=1;
					i+=3;
				}
				else d=0;
			}
		}
		if(d==0)
		{
			cout<<"NO";
			break;
		}
	}
	if(d==1) cout<<"YES";
	return 0;
}


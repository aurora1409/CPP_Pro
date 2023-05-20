#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	reverse(s2.begin(),s2.end());
	s2.erase(s2.end()-1);
//	string s3=""+strrev(s2);
//	strcpy(strrev(s2),s3);
	sort(s2.rbegin(),s2.rend());
//	cout<<s2;
	for(int i=1;i<s1.size();i++)
	{
		for(int j=0;j<s2.size();j++)
		{
			if(s1[i]-'0'<s2[j]-'0')
			{
				s1[i]=s2[j];
				reverse(s2.begin(),s2.end());
				s2.erase(s2.end()-1);
				reverse(s2.begin(),s2.end());
				break;
			}
		}
	}
	cout<<s1;
	return 0;
}


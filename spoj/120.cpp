#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s1,s2;
	int count=0;
	cin>>s1>>s2;
	string s3="";
	for(int i=0;i<s1.size();i++)
	{
		s3+=s1[i];
		if(s3==s2)
		{
			count++;
			s3="";
		}
	}
	cout<<count-1;
	return 0;
}


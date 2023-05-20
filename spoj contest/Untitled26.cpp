#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s1,s2,s3;
	cin>>s1;
	cin>>s2;
//	cin>>s2;
	getline(cin,s3);
	getline(cin,s3);
	for(int i=0;i<s3.size();i++)
	{
		for(int j=0;j<s1.size();j++)
		{
		//	cout<<s3[i]<<" "<<s1[j];
			if(s3[i]==s1[j])
			{
				s3[i]=s2[j];
				break;
			}
				
		}
	}
	for(int i=0;i<s3.size();i++) cout<<s3[i];
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	vector <char> a;
	for(int i=0;i<3;i++)
	{
		for(int j=i;j<=i;j++)
		{
			if(s1[i]=='K'&&s2[j]=='K') a.push_back('B');
			else if(s1[i]=='B'&&s2[j]=='B') a.push_back('G');
			else if(s1[i]=='G'&&s2[j]=='G') a.push_back('K');
			else if(s1[i]=='K'&&s2[j]=='K') a.push_back('B');
			else if((s1[i]=='K'&&s2[j]=='B')||(s1[i]=='B'&&s2[j]=='K')) a.push_back('B');
			else if((s1[i]=='K'&&s2[j]=='G')||(s1[i]=='G'&&s2[j]=='K')) a.push_back('K');
			else if((s1[i]=='G'&&s2[j]=='B')||(s1[i]=='B'&&s2[j]=='G')) a.push_back('G');
		}
	}
	for(int i=0;i<a.size();i++) cout<<a[i];
	return 0;
}


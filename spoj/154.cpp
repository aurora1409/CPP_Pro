#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	vector <string> a;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		a.push_back(s);
	}
	int count=0,count2=0;
	string s1;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]!=a[0])
		{
			count++;
			s1=a[i];
		}
		else count2++;
	}
	if(count>count2) cout<<s1;
	else cout<<a[0];
	return 0;
}


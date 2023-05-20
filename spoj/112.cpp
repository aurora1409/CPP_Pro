#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	long long ts[100005]={};
	string a= "ABCDEFGHIJKLMNOPQRSTUVXYZW";
	for(int i=0;i<s.size();i++)
	{
		for(int j=0;j<a.size();j++)
		{
			if(s[i]==a[j]) ts[a[j]]++;
		}
	}
	vector <long long> b;
	for(int i=0;i<26;i++)
		if(ts[a[i]]>0) b.push_back(ts[i]);
	sort(b.rbegin(),b.rend());
	long long sum=0;
	for(int i=0;i<k;i++)
	{
		sum+=pow(b[i],2);
	}
	cout<<sum;
	return 0;
}


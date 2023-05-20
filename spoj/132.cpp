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
	for(long long i=0;i<s.size();i++)
	{
		for(int j=0;j<a.size();j++)
		{
			if(s[i]==a[j]) ts[a[j]]++;
		}
	}
	vector <long long> b;
	for(int i=0;i<26;i++)
		if(ts[a[i]]>0) b.push_back(ts[a[i]]);
	sort(b.rbegin(),b.rend());
	long long sum=0,i=0,j=0;
	while(i<k)
	{
		long long x=b[j];
		while(x>0)
		{
			sum+=b[j];
			x--;
			i++;
		}
		j++;
	}
	cout<<sum;
	return 0;
}


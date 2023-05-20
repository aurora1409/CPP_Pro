#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	long long ts[100005]={};
//	string a= "ABCDEFGHIJKLMNOPQRSTUVXYZW";
	for(int i=0;i<s.size();i++)
	{
	//	for(int j=0;j<a.size();j++)
	//	{
			//if(s[i]==a[j])
			ts[s[i]]++;
	//	}
	}
	vector <long long> b;
	for(char i='A';i<='Z';i++)
		if(ts[i]>0) b.push_back(ts[i]);
	sort(b.rbegin(),b.rend());
	long long sum=0,i=0,j=0,x,t;
//	for(int i=0;i<k;i++)
	while(j<k)
	{
		x=i;
		t=b[i];
		//j=i;
		while(t>0)
		{
			sum+=pow(b[x],2);
		//	cout<<b[x]<<" ";
			t--;
			//x++;
			j++;
		}
		i++;
	}
	cout<<sum;
	return 0;
}


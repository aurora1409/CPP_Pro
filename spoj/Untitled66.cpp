#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	int ts[100005]={};
	for(int i=0;i<s.size();i++)
	{
		for(char j='a';j<='z';j++)
		{
			if(s[i]==j)
			{
				ts[j]++;
				break;
			}
		}
	}
	int count=0,sum=0;
	vector <int> a;
	for(char i='a';i<='z';i++)
	{
		if(ts[i]>0)
		{
			count++;
			sum+=ts[i];
			a.push_back(ts[i]);
		} 
	}
	sort(a.begin(),a.end());
	if(count==1||count==2) cout<<"0";
	else cout<<sum-a[a.size()-1]-a[a.size()-2];
	return 0;
}


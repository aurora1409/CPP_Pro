#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n]={},ts[100005]={};
	vector <int> b;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(ts[a[i]]==0) b.push_back(a[i]);
		ts[a[i]]++;
	}
	sort(b.begin(),b.end());
	if(b.size()>3) cout<<"NO";
	else
	{
		if(b.size()==3)
		{
			if(b[2]-b[1]==b[1]-b[0]) cout<<"YES";
			else cout<<"NO";
		}
		else cout<<"YES";
	}
	return 0;
}


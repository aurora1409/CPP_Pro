#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,count=0;
	cin>>n;
	int a[n]={},ts[100005]={};
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(ts[a[i]]==0) count++;
		ts[a[i]]++;
	}
	if(count==n) cout<<"NO";
	else cout<<"YES";
	return 0;
}


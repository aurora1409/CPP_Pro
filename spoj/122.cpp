#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n]={},ts[10005]={};
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		ts[a[i]]++;
	}
	if(ts[0]==1) cout<<"YES";
	else cout<<"NO";
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,sum=0;
	cin>>n;
	int a[n]={};
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	if(sum%2==1) cout<<sum;
	else cout<<sum-1;
	return 0;
}


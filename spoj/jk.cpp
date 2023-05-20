#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k,count=0;
	cin>>n>>k;
	for(int i=2;i<=n;i++)
	{
		if(i%2==0) count++;
	}
	if(count>=k) cout<<"yes";
	else cout<<"no";
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int gt(int n)
{
	int x=1;
	for(int i=1;i<=n;i++) x*=i;
	return x;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		for(int i=1;i<=n;i++)
			cout<<gt(i)/(gt(i-k)*gt(k))<<" ";
		cout<<endl;
	}
	return 0;
}


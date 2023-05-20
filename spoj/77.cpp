#include<bits/stdc++.h>

using namespace std;

bool stg(int n)
{
	for(int i=1;i<=sqrt(2*n);i++)
	{
		if(i*(i+1)/2==n) return 1;
	}
	return 0;
}
int main()
{
	int n,d=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(stg(i)==1&&stg(n-i)==1) 
		{
			d=1;
			cout<<"YES";
			break;
		}
	}
	if(d==0) cout<<"NO";
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int m,n,k;
	cin>>m>>n>>k;
	int x;
	x=min(m/2,n);
	if((m-x*2+n-x)>=k) cout<<x;
	else
	{
		while(x!=0&&(m-x*2+n-x)<k)
		{
			x--;
		}
		cout<<x;
	}
	return 0;
}


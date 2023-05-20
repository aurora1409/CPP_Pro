#include<bits/stdc++.h>

using namespace std;

int main()
{
	int y,k,n;
	cin>>y>>k>>n;
	int d=-1;
	for(int i=1;i<n-y;)
	{
		if((y+i)%k==0)
		{
			d=1;
			cout<<i<<" ";
			i+=k;
		}
		else
		{
			i++;
		}
	}
	if(d==-1) cout<<"-1";
	return 0;
}


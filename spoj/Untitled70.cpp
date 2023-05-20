#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,m,d=0;
		cin>>a>>m;
		for(int i=0;i<=m-1;i++)
		{
			if(a*i%m==1)
			{
				d=1;
				cout<<i;
			}
		}
		if(d==0) cout<<"-1";
		cout<<endl;
	}
	return 0;
}


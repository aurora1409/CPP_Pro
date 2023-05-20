#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n==0) cout<<"0";
	else
	{
		int max=0,min=1000000,x,y;
		for(int i=0;i<n;i++)
		{
			int z;
			cin>>z;
			if(z>max)
			{
				max=z;
				x=i;
			}
			if(z<min)
			{
				min=z;
				y=i;
			}
		}
		if(x>y)
		{
			int t=x;
			x=y;
			y=t;
		}
		if(n-1-x>y) cout<<n-1-x;
		else cout<<y;
	}
	return 0;
}


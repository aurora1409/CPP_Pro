#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int min=5000;
	for(int i=0;i<=n/3;i++)
	{
		int x=i*3;
		int y=n-x;
		if(y%5==0)
		{
			int z=i+y/5;
			if(z<min) min=z;
		}
	}
	if(min==5000) cout<<"-1";
	else cout<<min;
	return 0;
}


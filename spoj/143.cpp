#include<bits/stdc++.h>

using namespace std;

int tcs(int n)
{
	int x=1;
	while(n>0)
	{
		int y=n%10;
		x*=y;
		n/=10;
	}
	return x;
}
int main()
{
	int n,d=0;
	cin>>n;
	if(n==0) cout<<"10";
	else
	{
		for(int i=1;i<=100000;i++)
		{
			if(tcs(i)==n)
			{
				d=1;
				cout<<i;
				break;
			}
		}
		if(d==0) cout<<"-1";
	}
	return 0;
}


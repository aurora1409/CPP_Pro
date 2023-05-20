#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,x,count=0,count1=0;
	cin>>n>>x;
	for(int i=1;i<=sqrt(x)+10;i++)
	{
		if(x%i==0&&i<=n&&x/i<=n&&i<x/i) count++;
		if(x%i==0&&i<=n&&x/i<=n&&i==x/i) count1++;
	}
	cout<<count*2+count1; 
	return 0;
}


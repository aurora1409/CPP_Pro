#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,sum=0,count=0;
	cin>>n;
	while(sum<n)
	{
		sum+=sum+1;
		cout<<sum<<" ";
		count++;
	}
	cout<<count;
	return 0;
}


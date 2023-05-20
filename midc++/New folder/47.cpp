#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int sum=0;
	for(int i=0;i<n+1;i++)
	{
		for(int j=i;j<n+1;j++)
		{
			sum=sum+i+j;
		}
	}
	cout<<sum;
	return 0;
}


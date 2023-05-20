#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,sum=0,count=0;
	cin>>n;
	while(sum<n)
	{
		count++;
		for(int i=1;i<=count;i++)
			sum+=i;
		if(sum>n) 
		{
			count--;
			break;
		}
		//cout<<sum<<" ";
	}
	cout<<count;
	return 0;
}


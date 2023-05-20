#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0) break;
		int count=1;
		while(n!=1)
		{
			if(n%2==0) 
			{
				while(n%2==0)
				{
					count++;
					n/=2;
				}
			}
			else
			{
				n=n*3+1;
				count++;
				while(n%2==0)
				{
					count++;
					n/=2;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}


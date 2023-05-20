#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long x;
		cin>>x;
		int count=0;
		for(int i=1;i<sqrt(x)-1;i++)
		{
			for(int j=i+1;j<sqrt(x);j++)
			{
				if(i*i+j*j==x) 
				{
					count++;
					break;
				}
				else if(i*i+j*j>x) break;
			}
		}
		if(sqrt(x)*sqrt(x)==x) count++;
		cout<<count<<endl;
	}
	return 0;
}


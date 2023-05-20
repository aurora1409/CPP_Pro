#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,count=0;
		cin>>n;
		for(int i=1;i<=sqrt(n);i++)
		{
			if(n%i==0&&i%2==0) count++;
			long long x=n/i;
			if(n%x==0&&x!=i&&x%2==0) count++;
		}
		cout<<count<<endl;
	}
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int count=0;
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0&&i%2==0) count++;
			int x=n/i;
			if(n%x==0&&x!=i&&x%2==0) count++;
		}
		if(n%2==0) count++;
		cout<<count<<endl;
	}
	return 0;
}


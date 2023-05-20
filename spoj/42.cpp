#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,res=1;
		cin>>n;
		for(long long i=2*n-1;i>n;i--)
			if((i*n)%(i-n)==0) res+=2;
		cout<<res<<endl;
	}
	return 0;
}


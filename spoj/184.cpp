#include<bits/stdc++.h>

using namespace std;

bool cp(long long n)
{
	long long i=sqrt(n);
	if(i*i==n) return 1;
	else return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,count=0;
		cin>>n;
//		cout<<cp(n);
		for(long long i=0;i<=10000000;i++)
		{
			if(cp(i)==1&&cp(n-i)==1&&i<=n-i) count++;
		//	cout<<i<<" "<<n-i<<endl;
		}
//		cout<<endl;
		cout<<count<<endl;
	}
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

long long tonguoc(long long n)
{
	long long sum=0;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0) sum+=i;
		long long x=n/i;
		if(n%x==0&&x!=i) sum+=x;
	}
	return sum;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long x=tonguoc(n);
		long long y=tonguoc(x);
		if(y==2*n) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}


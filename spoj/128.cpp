#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n,count=0;
	cin>>n;
	for(long long i=1;i<=n;i++) count+=pow(2,i);
	cout<<count;
	return 0;
}


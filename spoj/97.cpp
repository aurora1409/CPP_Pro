#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n,d=0,sum=0;
	cin>>n;
	int a[n]={};
	for(long long i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	sort(a,a+n);
	if(sum>a[n-1]) cout<<sum;
	else cout<<a[n-1];
	return 0;
}


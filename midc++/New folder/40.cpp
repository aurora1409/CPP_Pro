#include<bits/stdc++.h>

using namespace std;

bool tonguoc(int n)
{
	int sum=0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) sum+=i+n/i;	
	}	
	if(sqrt(n)*sqrt(n)==n) sum-=sqrt(n);
	if(sum+1>n) return 1;
	else return 0;
}
int main()
{
	int l,r;
	cin>>l>>r;
	int count=0;
	for(int i=l;i<=r;i++)
	{
		if(tonguoc(i)==1)
			cout<<i<<" ";
		 //count++;
	}
//	cout<<count;
	return 0;
}


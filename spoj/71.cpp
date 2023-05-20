#include<bits/stdc++.h>

using namespace std;

bool snt(int n)
{
	if(n<2) return 0;
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0) return 0;
		}
	}
	return 1;
}
int uoc(int n)
{
	int count=0,d=0;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0&&snt(i)==1)
			count++;
		int x=n/i;
		if(i!=x&&n%x==0&&snt(x)==1) count++;
	}
	if(count==2) d=1;
	else d=0;
	return d;
}
int main()
{
	int n,count=0;
	cin>>n;
	for(int i=6;i<=n;i++)
	{
		if(uoc(i)==1) count++;
	}
	cout<<count;
	return 0;
}


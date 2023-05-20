#include<bits/stdc++.h>

using namespace std;

int res(int n)
{
	int resn=0;
	while(n>0)
	{
		int x=n%10;
		if(x==5) x=6;
		resn=resn*10+x;
		n/=10;
	}
	return resn;
}
int res1(int n)
{
	int resn1=0;
	while(n>0)
	{
		int x=n%10;
		resn1=resn1*10+x;
		n/=10;
	}
	return resn1;
}
int main()
{
	int a,b;
	cin>>a>>b;
	int x=res1(res(a));
	int y=res1(res(b));
	cout<<a+b<<" "<<x+y;
	return 0;
}


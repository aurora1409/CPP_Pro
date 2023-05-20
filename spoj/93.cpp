#include<bits/stdc++.h>

using namespace std;

long long sndd(long long a)
{
	long long res=0;
	while(a>0)
	{
		if(a%10!=0) res=res*10+a%10;
		a/=10;
	}
	return res;	
}
long long snd(long long a)
{
	long long res=0;
	while(a>0)
	{
		res=res*10+a%10;
		a/=10;
	}
	return res;	
}
int main()
{
	long long a,b;
	cin>>a>>b;
	long long c=a+b;
//	cout<<c<<" ";
	long long x=snd(sndd(a));
	long long y=snd(sndd(b));
	long long z=snd(sndd(c));
	if(x+y==z) cout<<"YES";
	else cout<<"NO";
//	cout<<x<<" "<<y<<" "<<z;
	return 0;
}


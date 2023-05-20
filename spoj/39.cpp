#include<bits/stdc++.h>

using namespace std;

int sumdg(int n)
{
	int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main()
{
	int n;
	cin>>n;
	int x=sumdg(n);
//	cout<<x<<" ";
	if((n%4==0&&n%100!=0)||n%400==0) cout<<3597+x*366;
	else cout<<3597+x*366-13-x;
	return 0;
}


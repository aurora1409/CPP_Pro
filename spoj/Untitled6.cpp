#include<bits/stdc++.h>

using namespace std;

int res(int n)
{
	int revn=0;
	while(n>0)
	{
		revn=revn*10+n%10;
		n/=10;
	}
	return revn;
}
int main()
{
	int a,b;
	cin>>a>>b;
	int x=res(a);
	int y=res(b);
	if(x>=y) cout<<x;
	else cout<<y;
	return 0;
}


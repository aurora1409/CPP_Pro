#include<bits/stdc++.h>

using namespace std;

int main()
{
	unsigned long long g,y;
	cin>>g>>y;
	unsigned long long t=g+y;
//	cout<<t<<" ";
	unsigned long long l=g/2+2;
//	cout<<l<<" ";
	unsigned long long b1=0,b2=0,delta=0;
	delta=l*l-4*t;
//	cout<<delta;
	if(delta==0)
	{
		b1=l/2;
		b2=t/b1;
	}
	else if(delta>0)
	{
		b1=(l+sqrt(delta))/2;
		b2=(l-sqrt(delta))/2;
	}
//	cout<<b1<<" "<<b2;
	cout<<min(b1,b2)<<" "<<max(b1,b2);
	return 0;
}


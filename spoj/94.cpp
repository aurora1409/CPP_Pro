#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long d1,d2,d3,sum=0;
	cin>>d1>>d2>>d3;
	if(d1<d2) 
	{
		sum+=d1;
		if(d3+d2<2*d3+d1&&d3+d2<d1+2*d2) sum+=d3+d2;
		else if(2*d3+d1<d1+2*d2) sum+=2*d3+d1;
		else sum+=d1+2*d2;
	}
	else
	{
		sum+=d2;
		if(d3+d1<2*d3+d2&&d3+d1<d2+2*d1) sum+=d3+d1;
		else if(2*d3+d2<d2+2*d1) sum+=2*d3+d2;
		else sum+=d2+2*d1;
	}
	cout<<sum;
	return 0;
}


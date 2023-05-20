#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n;
	cin>>n;
	long long count=0;
	while (n>0)
	{
		count++;
		long long cs=1;
		while (1)
		{
			if (2*cs>n) break;
			cs=cs*2;
		}
		n=n-cs;
	}
	cout<<count;
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

bool checkpri(long long n)
{
	if(n<2) return 0;
	for(long long i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
int main()
{
	long long n;
	while(cin>>n)
	{
		if(n==0) break;
		long long count=0;
		for(long long i=n+1;i<=2*n;i++)
		{
			if(checkpri(i)==1) count++;
		}
		cout<<count<<endl;
	}
	return 0;
}


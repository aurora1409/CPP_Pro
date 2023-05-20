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
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=2;i<=sqrt(n)+1;i++)
		{
			if(snt(i)==1&&snt(n-i)==1) 
			{
				cout<<i<<" "<<n-i;
				break;
			}
		}
		cout<<endl;
	}
	return 0;
}


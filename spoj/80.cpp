#include<bits/stdc++.h>

using namespace std;

//bool snt(long long n)
//{
//	if(n<2) return 0;
//	else
//	{
//		for(int i=2;i<=sqrt(n);i++)
//		{
//			if(n%i==0) return 0;
//		}
//	}
//	return 1;
//}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		for(int i=2;i<=sqrt(n)+10;i++)
		{
			if(n%i==0)
			{
				while(n%i==0)
				{
					cout<<i<<" ";
					n/=i;
				}
			}
		}
		if(n>1) cout<<n;
		cout<<endl;
	}
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

//int chiahet(string n,long long k)
//{
//	int res=0;
//	for(int i=0;i<n.size();i++)
//	{
//		int x=res*10+(n[i]-'0');
//		res=x%k;
//	}
//	return res;
//}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		//string n;
		long long n, k;
		cin>>n;
		cin>>k;
		long long sum=0;
		for(long long i=1;i<=n;i++)
		{
			sum+=i%k;
		}
		cout<<sum<<endl;
	}
	return 0;
}


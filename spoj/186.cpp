#include<bits/stdc++.h>

using namespace std;

int check(int i,int k)
{
	if(i==1&&k==1) return 1;
	int count=0;
//	for(int i=;i<=n;i++)
//	{
//		if(i==1) return 1;
		if(i%k==0)
		{
			while(i%k==0)
			{
				count++;
				i/=k;
			}
		}
//	}
	return count;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p;
		cin>>n>>p;
		int count=0;
		for(int i=1;i<=n;i++)
		{
			count+=check(i,p);
		}
		cout<<count<<endl;
	}
	return 0;
}


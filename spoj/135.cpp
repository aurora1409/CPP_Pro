#include<bits/stdc++.h>

using namespace std;

bool a[1000005]={1};
vector <long long> b;
void snt()
{
	for(long long i=2;i<=1000005;i++) a[i]=1;
	for(long long i=2;i*i<=1000005;i++)
	{
		if(a[i]==1)
		for(long long j=i*i;j<=1000005;j+=i)
		{
			a[j]=0;
		}
	}
	for(long long i=2;i<=1000005;i++)
	{
		if(a[i]==1)  b.push_back(i);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long l,r,count=0;
		cin>>l>>r;
		snt();
		for(int i=0;i<b.size();i++)
		{
			if(b[i]*b[i]<=r&&b[i]*b[i]>=l) count++;
			//cout<<b[i]<<" ";
			else break;
		}
		cout<<count<<endl;
	}
	return 0;
}


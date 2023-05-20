#include<bits/stdc++.h>

using namespace std;

long long gt(int n)
{
	long long x=1;
	for(int i=1;i<=n;i++) x*=i;
	return x;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n]={},ts[105]={};
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			ts[a[i]]++;
		}
		int count=0,count1=0,d,e;
		for(int i=0;i<105;i++)
		{
			if(ts[i]%2==0&&ts[i]%4!=0) 
			{
				d=ts[i];
				while(d>=2)
				{
					d-=2;
					count++;
				}
			}
			else if(ts[i]%4==0) 
			{
				e=ts[i];
				while(e>=4)
				{
					e-=4;
					count1++;
				}
			}
		}
	//	cout<<count<<" "<<count1;
		if(count%2==0) cout<<count/2+count1;
		else cout<<((count-1)/2+count1);
		cout<<endl;
	}
	return 0;
}


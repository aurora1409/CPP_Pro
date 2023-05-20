#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,s,sum=0,d=0;
	cin>>n>>s;
	int count=0,a[n]={};
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for(int i=n-1;i>=0;i--)
	{
		sum=0;
		sum+=a[i];
		count++;
		if(sum==s) break;
		for(int j=i-1;j>=0;j--)
		{
			sum+=a[j];
			count++;
			if(sum==s)
			{
				d=1;
				break;
			}
		}
		if(d==1) break;
	}
	cout<<count;
	return 0;
}


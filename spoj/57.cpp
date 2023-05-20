#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,s;
	cin>>n>>s;
	int a[n]={};
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	int d=0,sum=0,count=0;
	for(int i=n-1;i>=1;i--)
	{
		sum=0;
		count=0;
		sum+=a[i];
		count++;
		if(sum==s)
		{
			d=1;
			break;
		}
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
	}
	if(d==1) cout<<count;
	else cout<<"-1";
	return 0;
}


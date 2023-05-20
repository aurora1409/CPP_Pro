#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,s,p;
	cin>>n>>s;
	int a[n]={};
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
//	int sum=0,d=0;
	int count=0;
	for(int i=n-1;i>=0;i--)
	{
		if(s-a[i]>=0)
		{
			s-=a[i];
			count++;
			for(int j=i-1;j>=0;j--)
				if(s-a[j]>=0) s-=a[j];
			if(s==0) 
			{
				cout<<count;
				break;
			}
			else s=p;
		}
	}
//	if(d==1) cout<<"YES";
//	if(s>0) cout<<"NO";
	return 0;
}


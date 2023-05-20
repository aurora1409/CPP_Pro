#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n]={},b[n]={};
	for(int i=0;i<n;i++) cin>>a[i];
	b[0]=1;
	int count;
	for(int i=0;i<n;i++)
	{
		count=0;
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j])
				if(b[j]>count) count=b[j];
		}
		b[i]=count+1;
	}
	sort(b,b+n);
	cout<<b[n-1];
	return 0;
}


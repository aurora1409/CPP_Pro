#include<bits/stdc++.h>

using namespace std;

int main()
{
	int c,n;
	cin>>c>>n;
	int a[20]={};
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	int sum=0;
	for(int i=n-1;i>=0;i--)
	{
	//	cout<<a[i]<<" ";
		sum+=a[i];
		if(sum>c)
		{
			sum-=a[i];
	//		cout<<a[i]<<" ";
			while(sum<c&&sum+a[i-1]<c)
			{
				sum+=a[i-1];
	//			cout<<a[i-1]<<" ";
				i--;
			}
		}
	}
	cout<<sum;
	return 0;
}


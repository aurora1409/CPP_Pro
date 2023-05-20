#include<bits/stdc++.h>

using namespace std;

int a[1000][1000];
int main()
{
	long long n,sum=0,sum1;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
			sum+=a[i][j];
		}
	}
	sum=sum/((n-1)*2);
	if(n==2) cout<<a[0][1]/2<<" "<<a[1][0]/2;
	else
	{
		for(int i=0;i<n;i++)
		{
			sum1=0;
			for(int j=0;j<n;j++) sum1+=a[i][j];
			cout<<((sum1-sum)/(n-2))<<" ";
		}
	}
	return 0;
}


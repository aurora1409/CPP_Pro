#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[100005];
	int count=0;
	int VT=-1;
	for (int i=1; i<=n; i++)
	{
		cin>>a[i];
		if (i>1 && a[i]<a[i-1])
		{
			count++;
			VT=i;
		}
	}
	if (count>1) cout<<"-1";
	else if (count==0) cout<<"0";
	else if (count==1)
	{
		if (a[1]>=a[n])
		{
			cout<<(n-VT+1);
		}
		else cout<<"-1";
	}
	return 0;
}


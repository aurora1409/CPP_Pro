#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n+5]={},count=0,count1=0,ts[5005]={};
	for(int i=0;i<n;i++) 
	{
		cin>>a[i];
		if(ts[a[i]]==0) count++;
		ts[a[i]]++;
	}
	for(int i=0;i<=5000;i++)
	{
		if(ts[i]>0&&i>n) count1++;
	//	cout<<i<<" "<<ts[i]<<endl;
	}
	cout<<n-count+count1;
	return 0;
}


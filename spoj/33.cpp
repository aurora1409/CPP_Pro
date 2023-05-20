#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int a[1000]={},b[1000]={},j=0,c[1000]={},k=0,p=0,l=0,ts[1000]={},count1=0;
	for(int i=0;i<m*2;i++)
	{
		cin>>a[i];
		if(ts[a[i]]==0) count1++;
		ts[a[i]]++;
	}
	for(int i=0;i<m*2-1;i++)
	{
		if(a[i]==a[0])
		{
			b[j]=a[i+1];
			j++;
			l++;
		}
	}
//	cout<<a[0]<<" "<<ts[a[0]];
	for(int i=0;i<m*2-1;i++)
	{
		if(a[i]!=a[0])
		{
			c[k]=a[i];
			k++;
			p++;
		}
	}
	int z=0,t,count=0,d[1000]={},s=0;
	for(int k=0;k<p;k++)
	{
		t=0;
		for(int j=0;j<l;j++)
		{
			if(b[k]==b[j])
			{
				t=1;
				z++;
				break;
			}
		}
		if(z%2==0&&t==1)
		{
			d[s]=b[k-1];
			s++;
			d[s+1]=b[k-2];
			s++;
		}
	}
//	cout<<count;
//	cout<<m*2-ts[a[0]]*2-count*2+n-count1;
	int q=s;
	for(int s=0;s<q;s++)
	{
		cout<<d[s]<<endl;
	}
	return 0;
}


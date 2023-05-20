#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n]={},b[m]={};
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		for(int j=0;j<m;j++) scanf("%d",&b[j]);
		sort(a,a+n);
		sort(b,b+m);
		int i=0,j=0;
		while(i<n&&j<m)
		{
			if(a[i]<b[j])
			{
				cout<<a[i]<< " ";
				i++;
			}
			else if(a[i]>b[j])
			{
				cout<<b[j]<<" ";
				j++;
			}
			else
			{
				cout<<b[j]<<" ";
				i++;
				j++;
			}
		}
		while(i<n)
		{
			cout<<a[i]<< " ";
			i++; 
		}
		while(j<m)
		{
			cout<<b[j]<< " ";
			j++; 
		}
		cout<< endl;
		int l=0,r=0;
		while(l<n&&r<m)
		{
			if(a[l]<b[r]) l++;
			else if(a[l]>b[r]) r++;
			else
			{
				cout<<b[r]<<" ";
				l++;
				r++;
			}
		}
		cout<<endl;
	}
	return 0;
}


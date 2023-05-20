#include<bits/stdc++.h>

using namespace std;

struct khach
{
	int gio;
	int phut;
};
int main()
{
	int n;
	cin>>n;
	vector <khach> a(n);
	int count=0;
//	int ts[1000000]={},ts1[100000]={},count=1,count1=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].gio>>a[i].phut;
//		if(ts[a[i].gio]==0) count++;
//		ts[a[i].gio]++;
//		if(ts2[a[i].gio]==0) count1++;
//		ts2[a[i].phut]++;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i].gio!=a[j].gio) count+=0;
			else
			{
				if(a[i].phut==a[j].phut) count++;
				else count+=0;
			}
		}
	}
	cout<<count+1;
	return 0;
}


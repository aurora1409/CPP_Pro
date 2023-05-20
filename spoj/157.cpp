#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,count;
	cin>>n;
	int a[n]={};
	vector <int> b;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]==0) 
		{
			count=0;
			int j=i;
			while(a[j]==0)
			{
				count++;
				j++;
			}
			if(a[i-1]==1) count++;
			if(a[i+1]==1) count++;
			i=j;
			b.push_back(count);
		}
	}
	sort(b.begin(),b.end());
	//cout<<b[b.size()-1];
	for(int i=0;i<b.size();i++) cout<<b[i]<<" ";
	return 0;
}


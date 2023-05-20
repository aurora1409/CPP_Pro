#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	long long a[n+5]={};
	vector <int> b;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++)
	{
		int count=0;
		while(a[i]<=a[i+1])
		{
			count++;
			i++;
		}
		b.push_back(count);
	}
	sort(b.begin(),b.end());
	cout<<b[b.size()-1]+1;
	return 0;
}


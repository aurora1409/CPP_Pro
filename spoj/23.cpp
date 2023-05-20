#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a[10]={};
	vector <int> b;
	for(int i=0;i<10;i++) cin>>a[i];
	for(int i=0;i<10;i++)
	{
		int x=a[i]%42;
		b.push_back(x);
	}
	sort(b.begin(),b.end());
	int count=0;
	for(int i=0;i<10;i++)
	{
		if(b[i]!=b[i+1]) count++;
	}
	cout<<count;
	return 0;
}


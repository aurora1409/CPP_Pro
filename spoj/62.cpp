#include<bits/stdc++.h>

using namespace std;

struct cuocthi
{
	int x,y,z;
};
int main()
{
	int n;
	cin>>n;
	vector <cuocthi> a(n);
	for(int i=0;i<n;i++) cin>>a[i].x>>a[i].y>>a[i].z;
	int count=0;
	for(int i=0;i<n;i++)
	{
		if((a[i].x==1&&a[i].y==1)||(a[i].x==1&&a[i].z==1)||(a[i].z==1&&a[i].y==1))
			count++;
	}
	cout<<count;
	return 0;
}


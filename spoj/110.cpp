#include<bits/stdc++.h>

using namespace std;

struct sophong
{
	int p,q;
};
int main()
{
	int n;
	cin>>n;
	vector <sophong> a(n);
	int count=0;
	for(int i=0;i<n;i++) 
	{
		cin>>a[i].p>>a[i].q;
		if(a[i].q-a[i].p>=2) count++;
	}
	cout<<count;
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector <int> a(n);
		vector <int> b;
		for(int i=0;i<n;i++) cin>>a[i];
		int x=a[0]; int y=a[1];
		b.push_back(x*y);
		for(int i=1;i<n-1;i++)
		{
		//	cout<<a[i-1]<<" "<<a[i+1]<<" ";
			b.push_back(a[i-1]*a[i+1]);
		}
		b.push_back(a[n-1]*a[n-2]);
		for(int i=0;i<b.size();i++) cout<<b[i]<<" ";
		cout<<endl;
	}
	return 0;
}


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
	//	vector <int> a(n,1);
		for(int i=0;i<n;i++) cout<<i+1;
		for(int i=n-1;i>=1;i--) cout<<i;
		cout<<endl;
	}
	return 0;
}


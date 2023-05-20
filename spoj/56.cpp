#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a[3]={};
		for(int i=0;i<3;i++) cin>>a[i];
		sort(a,a+3);
		cout<<llabs(a[1]-a[0])+llabs(a[2]-a[1])<<endl;
	}
	return 0;
}


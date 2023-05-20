#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,d=0;
	cin>>n;
	for(int i=2;i<=n/2;i+=2)
	{
		if((n-i)%2==0)
		{
			d=1;
			cout<<"YES";
			break;
		}
	}
	if(d==0) cout<<"NO";
	return 0;
}


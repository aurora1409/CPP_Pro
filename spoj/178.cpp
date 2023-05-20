#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int b,p,count=0;
		cin>>b>>p;
		for(int i=1;i<=b;i+=2)
		{
			if((i%p)*(i%p)%p==1) count++;
		}
		cout<<count<<endl;
	}
	return 0;
}


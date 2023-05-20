#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b,c;
		cin>>a>>b;
		c=a*b;
		while(a>0)
		{
			if(a<b)
			{
				long long x=a;
				a=b;
				b=x;
			}
			a%=b;
		}
		cout<<c/b<<" "<<b<<endl;
	}
	return 0;
}


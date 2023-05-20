#include<bits/stdc++.h>

using namespace std;

int main()
{
	unsigned long long a,b;
	while(cin>>a>>b)
	{
		unsigned long long d=a*b;
		if(a==0&&b==0) break;
		while(a>0)
		{
			if(a<b) swap(a,b);
			a%=b;
		}
		cout<<b<<" "<<d/b<<endl;
	}
	return 0;
}


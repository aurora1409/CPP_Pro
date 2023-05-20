#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	while(cin>>x)
	{
		if(x==0) break;
		if(x<1000000) cout<<x;
		else if(x>=1000000&&x<5000000) cout<<x/10*9;
		else cout<<x/100*80;
		cout<<endl;
	}
	return 0;
}


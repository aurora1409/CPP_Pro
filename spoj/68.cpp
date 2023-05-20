#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int xa,ya,ua,va,xb,yb,ub,vb;
		cin>>xa>>ya>>ua>>va>>xb>>yb>>ub>>vb;
		if((vb>=ya&&vb<=va&&xb<=ua&&ub>=xa)||(vb>va&&yb<=va&&xb<=ua&&ub>=xa))
			cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
	return 0;
}


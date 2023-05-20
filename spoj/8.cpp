#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int x=b-a;
	int y=c-b;
	if(x>y) cout<<x-1;
	else cout<<y-1;
	return 0;
}


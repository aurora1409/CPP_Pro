#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int x=n/7;
	if(n%7==0) cout<<x*2<<" "<<x*2;
	else if(n%7==1) cout<<x*2<<" "<<x*2+1;
	else if(n%7==6) cout<<x*2+1<<" "<<x*2+2;
	else cout<<x*2<<" "<<x*2+2;
	
	return 0;
}


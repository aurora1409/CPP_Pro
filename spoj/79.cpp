#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		if((a==1&&b%2==0)||(a%2==1&&b%2==0&&a<b)) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
	return 0;
}


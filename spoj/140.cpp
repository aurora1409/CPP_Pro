#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long a,b;
	cin>>a>>b;
	long long s[3]={};
	for(int i=0;i<3;i++) cin>>s[i];
	sort(s,s+3);
	if(s[0]*s[0]+s[1]*s[1]!=s[2]*s[2]) cout<<"NO";
	else
	{
		long long x,y;
		if(a>b)
		{
			x=a; 
			y=b;
		}
		else
		{
			x=b;
			y=a;
		}
		if(s[0]<=y&&s[1]<=x) cout<<"YES";
		else cout<<"NO";
	}
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int count1=0,count2=0,count=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='S') count1++;
		else count2++;
	}
	if(count1==n||count2==n) cout<<n;
	else cout<<(n-1+2-count2/2);
	return 0;
}


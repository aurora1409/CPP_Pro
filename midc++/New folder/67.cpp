#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int count1=0,count2=0;
	while(n--)
	{
		string s;
		cin>>s;
		if(s=="Vietnam") count1++;
		else count2++;
	}
	if(count1>count2) cout<<"Vietnam";
	else cout<<"Indonesia";
	return 0;
}


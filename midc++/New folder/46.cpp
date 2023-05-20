#include<bits/stdc++.h>

using namespace std;
int n;
bool check(char s[])
{
	for(int i=0;i<n;i++)
	{
		if(s[i]-'0'!=4&&s[i]-'0'!=7) return 0;
	}
	return 1;
}
bool sum(char s[])
{
	int sum1=0,sum2=0;
	for(int i=0;i<n/2;i++) sum1+=s[i]-'0';
	for(int i=n/2;i<n;i++) sum2+=s[i]-'0';
	if(sum1==sum2) return 1;
	else return 0;
}
int main()
{
	cin>>n;
	char s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	if(check(s)==1&&sum(s)==1) cout<<"YES";
	else cout<<"NO";
	return 0;
}


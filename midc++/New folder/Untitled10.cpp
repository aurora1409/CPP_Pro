#include<bits/stdc++.h>

using namespace std;

int res(string a)
{
	int x=0;
	for(int i=0;i<a.size();i++) 
	{
		if(a[i]-'0'==5) a[i]++;
		x=x*10+(a[i]-'0');
	}
	return x;
}
int res1(string a)
{
	int x=0;
	for(int i=0;i<a.size();i++) 
	{
		if(a[i]-'0'==6) a[i]--;
		x=x*10+(a[i]-'0');
	}
	return x;
}
int main()
{
	string a,b;
	cin>>a>>b;
	int x=res(a);
	int y=res(b);
	int u=res1(a);
	int v=res1(b);
	cout<<u+v<<" "<<x+y;
	return 0;
}
/*
#include<bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	int b;
	cin>>a;
	cin>>b;
	int res=0;
	for(int i=0;i<a.size();i++)
	{
		int x=res*10+(a[i]-'0');
		res=x%b;
	}
	cout<<res;
	return 0;
}
*/


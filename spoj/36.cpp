#include<bits/stdc++.h>

using namespace std;

struct nc
{
	string x,y;
};
int main()
{
	int n;
	cin>>n;
//	string s1="00",s2="01",s3="10",s4="11";
	vector <nc> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i].x>>a[i].y;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i].x<<" "<<a[i].y;
	}
	return 0;
}


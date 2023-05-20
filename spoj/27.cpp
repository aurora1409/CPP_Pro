#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n]={};
	for(int i=0;i<n;i++) cin>>a[i];
	double x=0;
	for(int i=0;i<n;i++) x+=(double)a[i]/(n*100);
	cout<<fixed<<setprecision(12)<<x*100;
	return 0;
}


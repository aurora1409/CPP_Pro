#include<bits/stdc++.h>

using namespace std;
float cbh(int n)
{
	if(n==1) return 1;
	return sqrt(n+cbh(n-1));
}
int main()
{
	int n;
	cin>>n;
	cout<<cbh(n);
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m,count=0;
	cin>>n>>m;
	for(int i=0;i<=1000;i++)
	{
		if(i+(n-i*i)*(n-i*i)-m==0) count++;
	}
	cout<<count;
	return 0;
}


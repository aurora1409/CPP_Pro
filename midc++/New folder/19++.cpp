#include<bits/stdc++.h>

using namespace std;

long long n;
bool a[1000000]={};
void snt()
{
	for(int i=n+1;i<2*n;i++) a[i]=1;
	for(int i=n+1;i*i<=2*n;i++)
	{
		if(a[i]==1)
			for(int j=i*i;j<=2*n;j+=i) a[j]=0;
	}
	long long count=0;
	for(int i=n+1;i<=2*n;i++)
		if(a[i]==1) count++;
	cout<< count;
}
int main()
{
	while(cin>>n)
	{
		if(n==0) break;
		snt();
	}
	return 0;
}


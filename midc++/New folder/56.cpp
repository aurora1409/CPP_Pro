#include<bits/stdc++.h>

using namespace std;

int ucln(int a,int b)
{
	while(a>0)
	{
		if(a<b)
		{
			int x=a;
			a=b;
			b=x;
		}
		a%=b;
	}
	return b;
}
bool snt(int n)
{
	if(n<2) return 0;
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0) return 0;
		}
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,count=0;
		cin>>x;
		for(int i=1;i<=x;i++)
			if(ucln(i,x)==1) count++;
		if(snt(count)==1) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
	return 0;
}


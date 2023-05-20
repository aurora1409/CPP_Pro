#include<bits/stdc++.h>

using namespace std;

string a;
int snd(int n)
{
	int res=0;
	while(n>0)
	{
		res=res*10+n%10;
		n/=10;
	}
	return res;
}
void stringc(int n)
{
	while(n>0)
	{
		char x=(n%10)+'0';
		a.push_back(x);
		n/=10;
	}
}
void modulo()
{
	int res=0;
	int b=pow(10,9)+7;
    for(int i=0;i<a.size();i++)
    {
    	int x=res*10+(a[i]-'0');
    	res=x%b;
	}
	cout<<res<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n==0||n==1) cout<<n<<endl;
		if(n>1)
		{
			int f0=0,f1=1,fn=0;
			for(int i=2;i<=n;i++)
			{
				fn=f0+f1;
				f0=f1;
				f1=fn;
			}
			stringc(snd(fn));
			modulo();
			a.clear();
		}
	}
	return 0;
}


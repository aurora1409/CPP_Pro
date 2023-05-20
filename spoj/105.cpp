#include<bits/stdc++.h>

using namespace std;

vector <int> a;
vector <int> b;
void fibo()
{
	int f0=0,f1=1,fn=0;
	a.push_back(0);
	while(fn<=1000)
	{
		fn=f0+f1;
		a.push_back(fn);
		f0=f1;
		f1=fn;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int c[105]={};
		for(int i=0;i<n;i++) cin>>c[i];
		fibo();
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<a.size();j++)
			{
				if(c[i]==a[j])
				{
					b.push_back(c[i]);
					break;
				}
			}
		}
		for(int i=0;i<b.size();i++) cout<<b[i]<<" ";
		b.clear();
		cout<<endl;
	}
	return 0;
}


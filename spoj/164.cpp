#include<bits/stdc++.h>

using namespace std;

vector <int> a;
bool cs(int n)
{
	while(n>0)
	{
		int x=n%10;
		if(x!=0&&x!=9) return 0;
		n/=10;
	}
	return 1;
}
void bs()
{
	for(int i=9;i<=1000000;i+=9)
	{
		if(cs(i)==1) a.push_back(i);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		bs();
		int n;
		cin>>n;
		for(int i=0;i<a.size();i++)
		{
			if(a[i]%n==0)
			{
				cout<<a[i];
				break;
			}
		}
		cout<<endl;
	}
	return 0;
}


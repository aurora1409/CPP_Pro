#include<bits/stdc++.h>

using namespace std;

struct solve
{
	int a,b,c;
};
int main()
{
	int n;
	cin>>n;
	vector <solve> x(n);
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>x[i].a>>x[i].b>>x[i].c;
	}
	for(int i=0;i<n;i++)
	{
		if((x[i].a==1&&x[i].b==1)||(x[i].a==1&&x[i].c==1)||(x[i].c==1&&x[i].b==1))
		count++;
	}
	cout<<count;
	return 0;
}


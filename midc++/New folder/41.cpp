#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int xa,ya,xb,yb;
		cin>>xa>>ya>>xb>>yb;
		int d=0,e=0;
		vector <int> a;
		for(int i=0;i<=1000;i++)
		{
			d=sqrt(pow(i-xa,2)+pow(ya,2));
			e=sqrt(pow(i-xb,2)+pow(yb,2));
			a.push_back(d+e);
		}
		sort(a.begin(),a.end());
		cout<<a[0]<<endl;
	}
	return 0;
}


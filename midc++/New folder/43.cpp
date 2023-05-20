#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c,d;
	while(cin>>a>>b>>c>>d)
	{
		if(a==0&&b==0&&c==0&&d==0) break;
	//	vector <int> x;
		int count=0;
		while(a!=b||a!=c||a!=d||b!=c||b!=d||c!=d)
		{
			int x=a;
			a=abs(a-b);
			b=abs(c-b);
			c=abs(c-d);
			d=abs(x-d);
		//	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}


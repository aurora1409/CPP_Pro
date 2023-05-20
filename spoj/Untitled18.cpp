#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c;
	vector <int> x;
	while(cin>>a>>b>>c)
	{
		if(a==0&&b==0&&c==0) break;
		//cout<<a<<b<<c;
		x.push_back(a);
		x.push_back(b);
		x.push_back(c);
		sort(x.begin(),x.end());
		//cout<<x[0]<<x[1]<<x[2]<<endl;
		if(x[0]*x[0]+x[1]*x[1]==x[2]*x[2]) cout<<"right";
		else cout<<"wrong";
		cout<<endl;
		x.clear();
	}
	return 0;
}


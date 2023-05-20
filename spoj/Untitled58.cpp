#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x1,x2,y1,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	long long x=1LL*(x2-x1)*(y3-y1)-1LL*(x3-x1)*(y2-y1);
	if(x<0) cout<<"RIGHT";
	else if(x>0) cout<<"LEFT";
	else cout<<"TOWARDS";
	return 0;
}


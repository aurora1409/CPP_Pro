#include<bits/stdc++.h>

using namespace std;

int solve(int x1, int x2, int x3)
{
	if(x1==x2) return x3;
	if(x1==x3) return x2;
	if(x2==x3) return x1;
}
int main()
{
	int x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	cout<<solve(x1,x2,x3)<<" "<<solve(y1,y2,y3);
	return 0;
}


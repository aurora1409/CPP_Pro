#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x1,x2,x3;
	cin>>x1>>x2>>x3;
	int b=sqrt(x1*x3/x2);
	int a=b*x2/x3;
	int h=x2/a;
	cout<<2*(a+b)+2*(a+h)+2*(b+h);
	return 0;
}


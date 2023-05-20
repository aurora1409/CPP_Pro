#include<iostream>

using namespace std;

int main()
{
	int a[8];
	for(int i=0;i<8;i++) cin>>a[i];
	int d=0,e=0;
	for(int i=0;i<7;i++)
	{
		if(a[i]<a[i+1]) d=1;
		if(a[i]>a[i+1]) e=1;
	}
	if(d==1&&e==0) cout<<"ascending";
	else if(d==0&&e==1) cout<<"descending";
	else cout<<"mixed";
	return 0;
}

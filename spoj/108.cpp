#include<bits/stdc++.h>

using namespace std;

struct tgian
{
	int up,down;
};
bool cp1(tgian x1, tgian x2)
{
	return x1.up<x2.up;
}
bool cp2(tgian x1, tgian x2)
{
	return x1.down<x2.down;
}
int main()
{
	int n;
	cin>>n;
	vector <tgian> a(n);
	for(int i=0;i<n;i++) cin>>a[i].up>>a[i].down;
	int sum1=0,sum2=0;
	for(int i=0;i<n;i++)
	{
		sum1+=a[i].up;
		sum2+=a[i].down;
	}
	sort(a.begin(),a.end(),cp1);
	int minup=a[0].up;
	sort(a.begin(),a.end(),cp2);
	int mindown=a[0].down;
	int x=sum1+mindown;
	int y=sum2+minup;
	if(x>y) cout<<x;
	else cout<<y;
	return 0;
}


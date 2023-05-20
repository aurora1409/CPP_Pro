#include<bits/stdc++.h>

using namespace std;

struct people
{
	string name;
	int d,m,y;
};
bool cp( people x1, people x2)
{
	if(x1.y==x2.y) return x1.m<x2.m;
	else return x1.y<x2.y;
	if(x1.m==x2.m) return x1.d<x2.d;
	else return x1.m<x2.m;
	return x1.d<x2.d;
}
int main()
{
	int n;
	cin>>n;
	vector <people> a(n);
	for(int i=0;i<n;i++)
	{
		cin.ignore();
		cin>>a[i].name;
		cin>>a[i].d>>a[i].m>>a[i].y;
	}
	sort(a.begin(),a.end(),cp);
//	for(int i=0;i<n;i++)
//	{
//		cout<<endl<<a[i].name<<" "<<a[i].d<<" "<<a[i].m<<" "<<a[i].y<<endl;
//	}
	cout<<a[n-1].name<<endl<<a[0].name;
	return 0;
}


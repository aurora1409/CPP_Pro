#include<bits/stdc++.h>

using namespace std;

struct dua
{
	int g;
	int p;
	int s;
};
bool cmp(dua x, dua y)
{
	return x.g<y.g;
}
//bool cmp1(dua x, dua y)
//{
//	return x.p<y.p;
//}
//bool cmp2(dua x, dua y)
//{
//	return x.s<y.s;
//}
int main()
{
	int n;
	cin>>n;
	vector <dua> a(n);
	for(int i=0;i<n;i++)
	{
		cin.ignore();
		cin>>a[i].g>>a[i].p>>a[i].s;
	}
	sort(a.begin(),a.end(),cmp);
//	sort(a.begin(),a.end(),cmp1);
//	sort(a.begin(),a.end(),cmp2);
	for(int i=0;i<n;i++)
		cout<<a[i].g<<" "<<a[i].p<<" "<<a[i].g<<endl;
	return 0;
}


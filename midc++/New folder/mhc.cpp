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
	if(x.g==y.g) return x.p<y.p;
	else return x.g<y.g;
	if(x.p==y.p) return x.s<y.s;
	else return x.p<y.p;
	return x.s<y.s;
}
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
	for(int i=0;i<n;i++)
		cout<<a[i].g<<" "<<a[i].p<<" "<<a[i].s<<endl;
	return 0;
}


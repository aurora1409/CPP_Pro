#include<bits/stdc++.h>
 
using namespace std;
 
struct doanmax
{
	int l,r;
};
int main()
{
	int n;
	cin>>n;
	vector <doanmax> a(n);
	for(int i=0;i<n;i++) cin>>a[i].l>>a[i].r;
	int rmax=a[0].r;
	int lmin=a[0].l;
	for(int i=0;i<n-1;i++)
	{
		if(a[i+1].r>rmax) rmax=a[i+1].r;
		if(a[i+1].l<lmin) lmin=a[i+1].l;
	}
	int d=0,vt=0;
	for(int i=0;i<n;i++)
	{
		if(a[i].l==lmin)
		{
			if(a[i].r==rmax)
			{
				vt=i+1;
				d=1;
				break;
			}
		}
	}
	if(d==0) cout<<"-1";
	else cout<<vt;
	return 0;
}
 

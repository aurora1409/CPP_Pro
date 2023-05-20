#include<bits/stdc++.h>

using namespace std;

struct luyenrong
{
	int rong, nguoi;
};
bool cmp(luyenrong x1, luyenrong x2)
{
	return x1.rong<x2.rong;
}
int main()
{
	int s,n;
	cin>>s>>n;
	vector <luyenrong> a(n);
	for(int i=0;i<n;i++) cin>>a[i].rong>>a[i].nguoi;
//	if(s>a[0].rong) 
//	{
//		cout<<"YES";
//		s+=a[0].nguoi;
//	}
	sort(a.begin(),a.end(),cmp);
	int d=1;
	for(int i=0;i<n;i++)
	{
		if(s>a[i].rong) s+=a[i].nguoi;
		else
		{
			d=0;
			cout<<"NO";
			break;
		}
	}
	if(d==1) cout<<"YES";
	return 0;
}


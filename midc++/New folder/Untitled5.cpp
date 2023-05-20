/*
5
3 4
4 5
4 6
2 3
7 8
*/
#include<bits/stdc++.h>

using namespace std;

struct toado{
	int x;
	int y;
};
void solve(){
	int n;
	cin>>n;
	double z,minn=10000;
	vector <toado> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i].x>>a[i].y;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++){
			z=sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y));
			minn=min(z,minn);
		}
		cout << minn;
}
int main()
{
	solve();
	return 0;
}


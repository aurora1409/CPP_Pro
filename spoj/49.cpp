#include<bits/stdc++.h>

using namespace std;

struct toado{
	int x,y,z;
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector <toado> a(4);
		for(int i=0;i<4;i++) cin>>a[i].x>>a[i].y>>a[i].z;
		int t=((a[1].y-a[0].y)*(a[2].z-a[0].z)-(a[1].z-a[0].z)*(a[2].y-a[0].y))*(a[3].x-a[0].x) + ((a[1].z-a[0].z)*(a[2].x-a[0].x)-(a[1].x-a[0].x)*(a[2].z-a[0].z))*(a[3].y-a[0].y) + ((a[1].x-a[0].x)*(a[2].y-a[0].y)-(a[1].y-a[0].y)*(a[2].x-a[0].x))*(a[3].z-a[0].z);
		if(t==0) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}


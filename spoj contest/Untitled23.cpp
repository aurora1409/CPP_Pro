#include<bits/stdc++.h>

using namespace std;

//struct diem
//{
//	int x,y;
//};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int xa,ya,xb,yb;
		scanf("%d%d%d%d",&xa,&ya,&xb,&yb);
//		cin>>xa>>ya>>xb>>yb;
		int n;
		scanf("%d",&n);
		int a=ya-yb;
		int b=xb-xa;
//		vector <diem> a(n);
//		for(int i=0;i<n;i++) cin>>a[i].x>>a[i].y;
		int count=0;
		for(int i=0;i<n;i++)
		{
			int x,y;
			scanf("%d%d",&x,&y);
			if(a*(x-xa)+b*(y-ya)==0) count++;
		}
		printf("%d\n",count);
	}
	return 0;
}


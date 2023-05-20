#include<bits/stdc++.h>

using namespace std;

//bool check(int n, int a[],int x)
//{
//	for(int i=0;i<n,i++)
//	{
//		if(a[i]==b[j])
//			{
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		scanf("%d%d",&n,&m);
		int a[n]={},b[m]={};
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		for(int j=0;j<m;j++) scanf("%d",&b[j]);
		sort(a,a+n);
		sort(b,b+m);
		vector <int> c;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(a[i]==b[j])
				{
					c.push_back(a[i]);
					break;
				}
			}
		}
		int d=0;
		vector <int> e;
		for(int i=0;i<n;i++) 
		{
			for(int j=0;j<c.size();j++)
			{
				if(a[i]==c[j])
				{
					d=1;
					break;
				}
				else d=0; 
			}
			if(d==0) e.push_back(a[i]);
		}
		for(int i=0;i<m;i++) 
		{
			for(int j=0;j<c.size();j++)
			{
			//	cout<<b[i]<<" "<<c[j]<<endl;
				if(b[i]==c[j])
				{
					d=1;
					break;
				}
				else d=0; 
			}
		//	cout<<d<<endl;
			if(d==0) e.push_back(b[i]);
		//	cout<<b[i]<<" ";
		}
		for(int i=0;i<c.size();i++) e.push_back(c[i]);
		sort(e.begin(),e.end());
		for(int i=0;i<e.size();i++) printf("%d ",e[i]);
		printf("\n");
		for(int i=0;i<c.size();i++) printf("%d ",c[i]);
		printf("\n");
	}
	return 0;
}


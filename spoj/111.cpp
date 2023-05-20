#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n]={},b[n]={};
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		int d=0;
		for(int i=0;i<n;i++)
		{
			//for(int j=i;j<=i;j++)
			//{
				if(a[i]>b[i])
				{
					d=1;
					break;
				}
			//}
		}
		if(d==0) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}


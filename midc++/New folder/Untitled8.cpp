#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	bool a[1005]={};
	for(int i=2;i<=n;i++) a[i]=1;
	int count=0,vt=0;
	for(int i=2;i<=n;i++)
	{
		if(a[i]==1)
		{
			count++;
			if(count==k)
			{
				vt=i;
				break;
			}
			for(int j=i*i;j<=n;j+=i)
			{
				if(a[j]==1) count++;
				a[j]=0;
				if(count==k)
				{
					vt=j;
					break;
				}
			}
		}
	}
	cout<<vt;
	return 0;
}


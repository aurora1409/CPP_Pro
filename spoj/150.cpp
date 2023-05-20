#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,j,so,m;
		cin>>n>>k;
		for(int i=1;i<=n-k-1;i++)
		{
			j=i+1;
			so=0;
			so=so*10+i;
			while(j<=n)
			{
				m=1;
				while(m<k)
				{
					so=so*10+j;
					m++;
					j++;
				}
				cout<<so<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}


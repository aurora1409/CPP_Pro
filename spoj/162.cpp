#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=1,i=2;
		cin>>n;
		if(n==1) cout<<"1";
		else
		{
			while(n>1)
			{
				int d=0;
				while(n%i==0)
				{
					d++;
					n/=i;
				}
				count=count*(2*d+1);
				i++;
			}
			cout<<count<<endl;
		}
	}
	return 0;
}

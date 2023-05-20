#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,sum=0;
		cin>>n;
		long long x=n,count=0;
		for(int i=2;i<=n;i++)
		{
			if(n%i==0)
			{
				count=0;
				while(n%i==0)
				{
					count++;
					if(pow(i,count)!=x)
						sum+=pow(i,count);
					n/=i;
				}
			}
		}
		sum+=1;
		if(n>1) sum+=n;
	//	cout<<sum<<" ";
		if(sum==x) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
	return 0;
}


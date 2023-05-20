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
		int count=0,count1=0,d=0;
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				count1++;
				while(n%i==0)
				{
					count++;
					n/=i;
				}
			}
		}
		if(n>1)
		{
			count++;
			count1++;
		}
	//	cout<<count<<" "<<count1;
		if(count==count1&&count==3) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
	return 0;
}


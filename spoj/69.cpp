#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0,count1=0;
		cin>>n;
		int a[n]={};
		for(int i=0;i<n;i++) 
		{
			cin>>a[i];
			if(a[i]%2==0) count++;
			else count1++;
		}
//		cout<<count<<" "<<count1<<endl;
		if(count==n||(count1==n&&count1%2==0)) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}


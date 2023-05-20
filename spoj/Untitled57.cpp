#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,d=0;
		cin>>a;
		for(int i=3;i<=500;i++)
		{
			if(180*(i-2)==a*i) 
			{
				d=1;
				cout<<"YES";
				break;
			}
		}
		if(d==0) cout<<"NO";
		cout<<endl;
	}
	return 0;
}


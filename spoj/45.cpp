#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector <int> a;
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				while(n%i==0)
				{
					a.push_back(i);
					n/=i;
				}
			}
		}
		if(n>1) a.push_back(n);
	//	for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
		if(k<=a.size()) cout<<a[k-1]<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
}


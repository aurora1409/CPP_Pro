#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0) break;
		int a[6*n]={},ts[1000]={};
		vector <int> b;
		for(int i=0;i<6*n;i++)
		{
			cin>>a[i];
			ts[a[i]]++;
		}
		int count=1;
	//	sort(a,a+6*n);
		for(int i=0;i<1000;i++)
		{
		//	if(a[i]!=a[i+1]) count++;
			if(ts[i]>=1) 
			b.push_back(i);
		}
		sort(b.begin(),b.end());
//		for(int i=0;i<b.size();i++)
//			cout<<b[i]<<" ";
		if(b[0]!=1) cout<<"No";
		else
		{
			for(int i=0;i<49;i++)
			{
				if(b[i+1]-b[i]==1) count++;
				else break;
			}
	//		cout<<count<<" ";
			if(count==49) cout<<"Yes";
			else cout<<"No";
		}
		cout<<endl;
	}
	return 0;
}


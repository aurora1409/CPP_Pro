#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n,m;
	cin>>n>>m;
//	int count=0;
	vector <float> a;
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<=m;j++)
		{
			float delta=(float)i*i-j;
			if(delta>0) 
			{
				float x1=-i+sqrt(delta);
				float x2=-i-sqrt(delta);
				a.push_back(x1);
				a.push_back(x2);
			}
			if(delta==0)
			{
				float x=-(float)i;
				a.push_back(x);
			}
		}
	}
	sort(a.begin(),a.end());
	int count=0;
//	if(a.size()==1) cout<<"1";
//	if(a.size()==0) cout<<"0";
	//else
//	{
		for(int i=0;i<a.size()-1;i++)
		{
			if(a[i]!=a[i+1])
	//		{
	//		//	while(a[i]==a[i+1])
					count++;
	//		}
		//	cout<<a[i]<<" ";
		}
		cout<<count+1;
//	}
//	count=a.size();
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		int count=0;
		vector <int> a;
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				a.push_back(i);
				if(i!=n/i) a.push_back(n/i);
			}
			
		}
		for(int i=0;i<a.size();i++)
		{
			if(a[i]%2==0) count++;
		}
		if(n%2==0) count++;
		cout<<count<<endl;
	}
	return 0;
}


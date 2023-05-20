#include<bits/stdc++.h>

using namespace std;

int n;
int Bool[10]={0};
int b[10]={};
void solve(int k)
{
	for(int i=1;i<=n;i++)
	{
		if(!Bool[i])
		{
			b[k]=i;
			Bool[i]=1;
			if(k==n) 
			{
				for(int i=1;i<=n;i++) cout<<b[i];
				cout<<" ";
			}
			else solve(k+1);
			Bool[i]=0;
		}
	}	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		solve(1);
		cout<<endl;
	}
	return 0;
}


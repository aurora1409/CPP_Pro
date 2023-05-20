#include<bits/stdc++.h>

using namespace std;

int n;
int B[10]={0};
int b[10]={};
void solve(int k)
{
	for(int i=1;i<=n;i++)
	{
		if(B[i]==0)
		{
			b[k]=i;
			B[i]=1;
			if(k==n) 
			{
				for(int i=1;i<=n;i++) cout<<b[i];
				cout<<endl;
			}
			else solve(k+1);
			B[i]=0;
		}
	}	
}
int main()
{
	cin>>n;
	solve(1);
	return 0;
}

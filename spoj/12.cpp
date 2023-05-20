#include<bits/stdc++.h>

using namespace std;

bool checkpri(int n)
{
	if(n<2) return 0;
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0) return 0;
		}
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int d=0,sum=0;
		if(checkpri(n)==1) d++;
		for(int i=2;i<=n/2;i++)
		{
			sum=0;
			if(checkpri(i)==1)
			{
				for(int j=i;j<=n;j++)
				{
					if(checkpri(j)==1)
					{
						sum+=j;
						if(sum==n)
						{
							d++;
							break;
						}
						if(sum>n) break;
					}
				}
			}
		}
		cout<<d<<endl;
	}
	return 0;
}


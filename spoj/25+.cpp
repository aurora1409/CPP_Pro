#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0) break;
		int count=0;
		while(n!=1)
		{
			if(n%2==0)
			{
				n=n/2;
				count++;
			}
			else
			{
				n=n*3+1;
				count++;
			}
		}
		cout<<count+1<<endl;
	}
	return 0;
}


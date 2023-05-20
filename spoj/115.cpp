#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k=0,sum=0,sum1=0,count=0;
	cin>>n;
	while(1)
	{
		k++;
	//	for(int i=1;i<=k;i++) sum+=i;
		for(int i=1;i<=k+1;i++) sum1+=i;
		count++;
		if(sum1>n)
		{
			//sum=sum1;
		//	count--;
			break;
		}
	}
	cout<<count;
	return 0;
}


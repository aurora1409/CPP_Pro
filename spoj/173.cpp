#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int a[15]={};
	for(int i=1;i<=k;i++) a[i]=i;
	int d=0,i;
	while(d!=1)
	{
		i=k;
		for(int j=1;j<=k;j++) cout<<a[j]<<" ";
		cout<<endl;
		while(i>0&&a[i]==n-k+i) i--;
		if(i>0)
		{
			a[i]++;
			for(int j=i+1;j<=k;j++)
				a[j]=a[i]+j-i;
		}
		else d=1;	
	}
	return 0;
}


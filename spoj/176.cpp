#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,count=0;
	cin>>n;
	int a[n]={};
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1,j=n;i<=n,j>0;)
	{
		if(a[i]==a[j])
		{
			i++;
			j--;
			if(i>=j) break;
		}
		else
		{
			if(a[i]<a[j])
			{
				a[i+1]=a[i]+a[i+1];
				count++;
				i++;
			}
			else
			{
				a[j-1]=a[j]+a[j-1];
				count++;
				j--;
			}
		}	
	}
	cout<<count;
	return 0;
}


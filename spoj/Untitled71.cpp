#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,count1=0,count2=0;
	cin>>n;
	int a[n]={};
	for(int i=0;i<n;i++) cin>>a[i];
	if(n==1) cout<<"1 0";
	else
	{
		for(int i=0,j=n-1;i<n,j>=0;)
		{
			if(a[i]==a[j])
			{
				count1++;
				count2++;
				i++;
				j--;
				if(i==j)
				{
					count1++;
					break;
				}
			}
			else if(a[i]<a[j])
			{
				a[j]-=a[i];
				count1++;
				i++;
				if(i==j)
				{
					count2++;
					break;
				}
			}
			else
			{
				a[i]-=a[j];
				count2++;
				j--;
				if(i==j)
				{
					count1++;
					break;
				}
			}
		}
		cout<<count1<<" "<<count2;
	}
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int a[100001];
int b[100001];
int main()
{
	int n,p=0,count=1,sum=0;
	cin >> n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]==a[i+1]) count=1;
		else
		{
			b[p]=count;
			p++;
		    count=1;
		}
	}
	for(int i=0;i<p;i++) sum+=b[i];
	if(sum==n-1) cout<<sum+1<<endl;
	else cout<<sum<<endl;
	return 0;
}


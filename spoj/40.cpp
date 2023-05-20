#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
	int x,y;
	cin>>x>>y;
	int d=0;
	for(int i=0;i<14;i++)
	{
		if(a[i]==x&&a[i+1]==y)
		{
			d=1;
			cout<<"YES";
			break;
		}
	}
	if(d==0) cout<<"NO";
	return 0;
}


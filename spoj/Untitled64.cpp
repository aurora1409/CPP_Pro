#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x,count=0;
	cin>>x;
	int di=1;
	for(int i=2;i<=100000;i++)
	{
		if(di>x) break;
		else count++;
		x-=di;
		di+=i;
//		cout<<di<<" "<<count<<" ";
	}
	cout<<count;
	return 0;
}


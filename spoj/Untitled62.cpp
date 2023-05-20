#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x,count=1;
	cin>>x;
	int di=1;
	for(int i=2;i<=100000;i++)
	{
		di+=i;
		count++;
		x-=di;
//		cout<<di<<" "<<count<<" ";
		if(di>x) break;
	}
	cout<<count-1;
	return 0;
}


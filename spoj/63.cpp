#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b,d=0,x,y,count=0;
		cin>>n>>a>>b;
		if(a>b)
		{
			x=a;
			y=b;
		}
		else
		{
			x=b;
			y=a;
		}
		count+=n/x;
		n-=count*x;
//		cout<<count;
		while(n<y)
		{
			count--;
			n+=x;
		}
		cout<<count;
		//n-=count*x;
		while(n!=0)
		{
			n-=b;
			count++;
			if(n<0) 
			{
				d=1;
				break;
			}
		}
		if(d==1) cout<<"-1";
		else cout<<count;
		cout<<endl;
	}
	return 0;
}


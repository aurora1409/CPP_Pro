#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int x[3]={},y[3]={},j=0;
	for(int i=0;i<3;i++) cin>>x[i];
	int count1=0,count2=0,count3=0;
	for(int i=0;i<3;i++)
	{
		for(int i=0;i<=24*60;)
		{
			if(x[i]==i)
			{
				y[j]=1;
			//	j++;
			}
//			else if(m==i) count2++;
//			else if(g==i) count3++;
			if(i%a==0) i+=b;
			else i++;
		}
	}
	for(int i=0;i<j;i++) cout<<y[i]<<" ";
	return 0;
}


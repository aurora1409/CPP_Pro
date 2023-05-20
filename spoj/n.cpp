#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	string s;
	for(int i=1;i<=t;i++)
	{
		cin>>i;
		cin>>s;
		cout<<i<<" ";
		int x1=0,x2=0,x3=0,x4=0,x5=0,x6=0,x7=0,x8=0;
		for(int i=0;i<s.size()-2;i++)
		{
			string s1="";
			s1=s1+s[i]+s[i+1]+s[i+2];
			if(s1=="TTT") x1++;
			else if(s1=="TTH") x2++;
			else if(s1=="THT") x3++;
			else if(s1=="THH") x4++;
			else if(s1=="HTT") x5++;
			else if(s1=="HTH") x6++;
			else if(s1=="HHT") x7++;
			else if(s1=="HHH") x8++;
		}
		cout<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<" "<<x5<<" "<<x6<<" "<<x7<<" "<<x8<<endl;
	}
	return 0;
}


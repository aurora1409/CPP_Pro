#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	int count=1,sum=0;
	if(s=="0"||s=="1"||s=="2"||s=="3"||s=="4"||s=="5"||s=="6"||s=="7"||s=="8"||s=="9")
		cout<<"0";
	else
	{
		for(int i=0;i<s.size();i++)
		{
			sum+=s[i]-'0';
		}
	//	cout<<sum<<" ";
		if(sum<10) cout<<"1";
		else
		{
			while(sum>9)
			{
				int x=sum;
				sum=0;
				count++;
				while(x>0)
				{
					sum+=x%10;
					x/=10;
				//	cout<<sum<<" ";
				}
			}
			cout<<count;
		}
	}
	return 0;
}


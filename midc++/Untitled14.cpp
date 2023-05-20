#include<iostream>
#include<math.h>
#include<string>
using namespace std;
bool checkp(int n)
{
	if(n<2) return 0;
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				return 0;
				break;
			}
		}
	}
	return 1;
}
int main()
{
	string s;
	getline(cin,s);
	for(int i=0;i<=s.size();i++)
	{
		if(checkp(i+1)==1) s[i+1]='*';
	}
	cout<<s;
	return 0;
}


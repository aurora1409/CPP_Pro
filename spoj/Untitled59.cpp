#include<bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	cin>>a;
	int sum=0,sum1=0;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]=='C')
		{
			if(a[i+1]=='5'||a[i+1]=='2'||a[i+1]=='3'||a[i+1]=='4'||a[i+1]=='6'||a[i+1]=='7'||a[i+1]=='8'||a[i+1]=='9')
			{
				sum+=12*(a[i+1]-'0');
				i++;
			}
			else sum+=12;
		}
		else if(a[i]=='H')
		{
			if(a[i+1]=='5'||a[i+1]=='2'||a[i+1]=='3'||a[i+1]=='4'||a[i+1]=='6'||a[i+1]=='7'||a[i+1]=='8'||a[i+1]=='9')
			{
				sum+=1*(a[i+1]-'0');
				i++;
			}
			else sum+=1;
		}
		else if(a[i]=='O')
		{
			if(a[i+1]=='5'||a[i+1]=='2'||a[i+1]=='3'||a[i+1]=='4'||a[i+1]=='6'||a[i+1]=='7'||a[i+1]=='8'||a[i+1]=='9')
			{
				sum+=16*(a[i+1]-'0');
				i++;
			}
			else sum+=16;
		}
		if(a[i]=='(')
		{
			while(a[i]!=')')
			{
				if(a[i+1]=='C')
				{
					if(a[i+2]=='5'||a[i+2]=='2'||a[i+2]=='3'||a[i+2]=='4'||a[i+2]=='6'||a[i+2]=='7'||a[i+2]=='8'||a[i+2]=='9')
					{
						sum1+=12*(a[i+2]-'0');
						i++;
					}
					else sum1+=12;
				}
				if(a[i+1]=='H')
				{
					if(a[i+2]=='5'||a[i+2]=='2'||a[i+2]=='3'||a[i+2]=='4'||a[i+2]=='6'||a[i+2]=='7'||a[i+2]=='8'||a[i+2]=='9')
					{
						sum1+=1*(a[i+2]-'0');
						i++;
					}
					else sum1+=1;
				}
				if(a[i+1]=='O')
				{
					if(a[i+2]=='5'||a[i+2]=='2'||a[i+2]=='3'||a[i+2]=='4'||a[i+2]=='6'||a[i+2]=='7'||a[i+2]=='8'||a[i+2]=='9')
					{
						sum1+=16*(a[i+2]-'0');
						i++;
					}
					else sum1+=16;
				}
				i++;
			}
			if(a[i+1]=='5'||a[i+1]=='2'||a[i+1]=='3'||a[i+1]=='4'||a[i+1]=='6'||a[i+1]=='7'||a[i+1]=='8'||a[i+1]=='9')
				sum+=sum1*(a[i+1]-'0');
			else sum+=sum1;
		}
	}
	cout<<sum;
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long a,b,c,d;
	double x1,x2;
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	x1=-((double)b+sqrt(d))/(2*a);
	x2=-((double)b-sqrt(d))/(2*a);
	if(a==0)
	{
		if(b==0)
		{
			if(c==0) cout<<"-1";
			else cout<<"0";
		}
		else printf("1\n%.5lf",-((double)c/b));
	}
	else
	{
		if(a>0&&b==0&&c==0) cout<<"1"<<endl<<"-0.00000";
		else if(a>0&&b==0&&c==0) cout<<"1"<<endl<<"0.00000";
		else
		{	
			if(d<0) cout<<"0";
			else 
			{
				if(d==0) printf("1\n%.5lf",-((double)b/(2*a)));
				else
				{
					if(x1>x2) printf("2\n%.5lf\n%.5lf",x2,x1);
					if(x2>x1) printf("2\n%.5lf\n%.5lf",x1,x2);
				}
			}
		}
	}
	return 0;
}


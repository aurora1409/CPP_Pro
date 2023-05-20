#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long a,b,c,d;
	while(cin>>a>>b>>c>>d)
	{
		if(a==-1&&b==-1&&c==-1&&d==-1) break;
		if(a==-1)
		{
			if(c-b==d-c) cout<<b-(c-b);
			else if((float)c/b==(float)d/c) cout<<b/(c/b);
			else cout<<"-1";
		}
		else if(b==-1)
		{
			long long x=d-c;
			//long long y=d/c;
			if(a+2*x==c) cout<<a+x;
			else if(a*((float)d/c)*((float)d/c)==c) cout<<a*(d/c);
			else cout<<"-1";
		}
		else if(c==-1)
		{
			long long x=b-a;
		//	long long y=(float)b/a;
			if(b+2*x==d) cout<<b+x;
			else if(b*((float)b/a)*((float)b/a)==d) cout<<b*(b/a);
			else cout<<"-1";
		}
		else if(d==-1)
		{
			if(b-a==c-b) cout<<c+(b-a);
			else if((float)b/a==(float)c/b) cout<<c*(b/a);
			else cout<<"-1";
		}
		cout<<endl;
	}
	return 0;
}


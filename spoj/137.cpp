#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if (a==0 && (b==0 || c==0)) cout<<"NO";
		else
		{
			if(b==c) cout<<"YES";
			else
			{
				int t=abs(b-c);
				if(t%3==0) cout<<"YES";
				else cout<<"NO";
			}
		}
		cout<<endl;
	}
	return 0;
}


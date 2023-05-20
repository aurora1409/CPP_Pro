#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c,d,i=1;
	cin>>a>>b>>c>>d;
		//if(a>100||b>100||c>100||d>100||a<1||b<1||c<1||d<1) break;	
	//	cout<<"Test "<<i<<": ";
		float x1=abs((float)a/c-(float)b/d);
		float x2=abs((float)c/d-(float)a/b);
		float x3=abs((float)d/b-(float)c/a);
		float x4=abs((float)b/a-(float)d/c);
		float x5=max(x1,x2);
		float x6=max(x5,x3);
		float x7=max(x6,x4);
		if(x7==x1) cout<<"0";
		else if(x7==x2) cout<<"1";
		else if(x7==x3) cout<<"2";
		else if(x7==x4) cout<<"3";
		cout<<endl;
	//	i++;
	return 0;
}


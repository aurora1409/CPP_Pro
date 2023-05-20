#include<bits/stdc++.h>

using namespace std;

int ucln (int a, int b)
{
	while(b!=0)
	{
		int x=a%b;
		a=b;
		b=x;
	}
	return a;
}
int main()
{
	int n, m;
	cin>>n>>m;
	vector <int> P;
	vector <int> Q;
	int t;
	for(int i=0; i<n+1; i++) 
	{
		cin>>t;
		P.push_back(t);
	}
	for(int i=0; i<m+1; i++) 
	{
		cin>>t;
		Q.push_back(t);
	}
	if(n>m)
	{
		if (P[0]*Q[0]>0) cout<<"Infinity";
		else cout<<"-Infinity";
	}
	else if(n<m) cout<<"0/1";
	else
	{
		int x=ucln(P[0], Q[0]);
		if ((Q[0]<0 && x>0)||(Q[0]>0 &&x<0))
		{
			x=x*-1;
			cout<<(P[0]/x)<<"/"<<(Q[0]/x);
		}
		else cout<<(P[0]/x)<<"/"<<(Q[0]/x);
	}
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

long long du(string a)
{
	long long b=1000000007;
	long long res=0;
	for(long long i=0;i<a.size();i++)
    {
    	long long x=res*10+(a[i]-'0');
    	res=x%b;
	}
	return res;
}
int main()
{
	string a,b;
	while(cin>>a>>b)
	{
		if(a=="0"&&b=="0") break;
//		cin>>a;
//		cin>>b;
		cout<<pow(du(a),du(b));
		cout<<endl;
	}
	return 0;
}


#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define quickly ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int Top=0;
stack <int> s1;
int main()
{
	quickly;
	string s;
	int a;
	while(1)
	{
		cin>>s;
		if(s=="end") break;
		else if(s=="init") 
		{
			while(s1.empty()==0) s1.pop();
		}
		else if(s=="push")
		{
			cin>>a;
			s1.push(a);
		}
		else if(s=="pop") 
		{
			if(s1.empty()==0) s1.pop();
		}
		else if(s=="top") 
		{
			if(s1.empty()) cout<<"-1"<<endl;
			else cout<<s1.top()<<endl;
		}
		else if(s=="size") cout<<s1.size()<<endl;
		else if(s=="empty") cout<<s1.empty()<<endl;
	}
	return 0;
}




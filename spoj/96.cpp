#include<bits/stdc++.h>

using namespace std;

vector <char> b;
void themso(string n)
{
	for(int i=0;i<n.size();i++)
		b.push_back(n[i]);	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector <string> a(3);
		for(int i=0;i<3;i++)
		{
			string s;
			cin>>s;
			themso(s);
		}
		sort(b.rbegin(),b.rend());
		for(int i=0;i<b.size();i++) cout<<b[i];
		cout<<endl;
		b.clear();
	}
	return 0;
}


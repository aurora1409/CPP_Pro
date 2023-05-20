#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s); 
	//	getline(cin,s);
		if(s=="dung") cout<<"2";
		if(s=="lon hon") cout<<"1";
		if(s=="nho hon") cout<<"3";
		cout<<endl;
	}
	return 0;
}


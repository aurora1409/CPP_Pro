#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	int ts[1000]={};
//	string a= "abcdefjhijklmnopqrstuvwxyz";
	int count=0;
	for(int i=0;i<s.size();i++) ts[s[i]]++;
	for(char i='a';i<='z';i++)
	{
		//for(int j=0;j<a.size();j++)
		//{
		//	if(s[i]==a[j])
		//	{
				if(ts[i]!=0) count++; 
		//		ts[a[j]]++;
		//		break;
		//	}
		//}
	}
//	cout<<count<<" ";
	if(count%2==1) cout<<"IGNORE HIM!";
	else cout<<"CHAT WITH HER!";
	return 0;
}


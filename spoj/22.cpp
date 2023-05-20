#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s1;
	cin>>s1;
	//vector <char> s1;
	//for(int i=0;i<s1.size();i++) cin>>s1[i];
	vector <char> s2;
	vector <char> s3;
//	cout<<s1.size();
	if(s1.size()%3==1) 
	{
		s2.push_back('0');
		s2.push_back('0');
	}
	if(s1.size()%3==2) s2.push_back('0');
	for(int i=0;i<s1.size();i++) s2.push_back(s1[i]);
//	for(int i=0;i<s2.size();i++) cout<<s2[i];
//	cout<<endl;
	for(int i=0;i<s2.size()-2;i+=3)
	{
		string s="";
	//	for(int j=i+1;j<s2.size()-1;j++)
	//	{
	//		for(int k=j+1;k<s2.size();k++)
	//		{
				s=s+s2[i]+s2[i+1]+s2[i+2];
			//	cout<<s<<" ";
				if(s=="000")  s3.push_back('0');
				else if(s=="001") s3.push_back('1');
				else if(s=="010") s3.push_back('2');
				else if(s=="011") s3.push_back('3');
				else if(s=="100") s3.push_back('4');
				else if(s=="101") s3.push_back('5');
				else if(s=="110") s3.push_back('6');
				else if(s=="111") s3.push_back('7');
	//	}
	//	}
	}
	for(int i=0;i<s3.size();i++) cout<<s3[i];
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

void deleteit(string s,int cd,int i)
{
	if(i==cd-1) return;
	else if(s[i]=='u'||s[i]=='e'||s[i]=='o'||s[i]=='a'||s[i]=='i'||s[i]=='y')
	{
		strcpy(s+i,s+i+1);
		i--;
		cd--;
	}
	deleteit(s,cs,i+1);
}
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
		if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
	int cd=s.size();
	deleteit(s,cd,0);
	cout<<s;
	return 0;
}


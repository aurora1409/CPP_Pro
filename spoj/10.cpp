#include<bits/stdc++.h>

using namespace std;

void deleteit(char s[],int cd,int i)
{
	if(i==cd-1) return;
	else if(s[i]=='u'||s[i]=='e'||s[i]=='o'||s[i]=='a'||s[i]=='i'||s[i]=='y')
	{
		strcpy(s+i,s+i+1);
		i--;
		cd--;
	}
	deleteit(s,cd,i+1);
}
int main()
{
	char s[1005];
	scanf("%s",s);
	int cd=strlen(s);
	deleteit(s,cd,0);
	vector <char> a;
//	string res=".";
	for(int i=0;i<strlen(s);i++) 
	{
		a.push_back('.');
		a.push_back(s[i]);
	}
	for(int i=0;i<a.size();i++) cout<<a[i];
	return 0;
}


#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.ignore();
	vector <string> name;
	string s;
	for(int i=0;i<n;i++)
	{
		getline(cin,s);
		name.push_back(s);
	}
	int a[1005]={},b[1005]={},c[1005]={};
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
	for(int i=0;i<n;i++) cin>>c[i];
	//vector <string> name1;
	int max=0,d[1005]={},j=0;
	for(int i=0;i<n;i++)
	{
		d[j]=a[i]+b[i]+c[i];
		j++;
	}
	sort(d,d+n);
	int e[1005]={},k=0,count=0;
	for(int i=n-1;i>=1;i++)
	{
		for(int j=n-2;j>=0;j++)
		{
			if(d[i]==d[j])
			{
				e[k]=d[i];
				k++;
				count++;
			}
		}
	}
	for(int k=0;k<count;k++) cout<<e[k];
	return 0;
}


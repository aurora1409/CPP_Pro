#include<bits/stdc++.h>

using namespace std;

int main()
{
	string n;
	cin>>n;
	int d=0,count=0;
	for(int i=0;i<n.size();i++)
	{
		count++;
		if(n[i]-'0'!=4&&n[i]-'0'!=7) 
		{
			d=1;
			cout<<"NO";
			break;
		}
	}
//	cout<<count<<endl;
	if(d==0&&(count==4||count==7)) cout<<"YES";
	else cout<<"NO";
	return 0;
}


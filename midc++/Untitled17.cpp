#include <iostream>

using namespace std;

int main()
{
    string a;
    int b;
    cin>>a;
    cin>>b;
    int res=0;
    for(int i=0;i<a.size();i++)
    {
    	int x=res*10+(a[i]-'0');
    	res=x%b;
	}
	cout<<res;
}


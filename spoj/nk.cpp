#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n,x=0;
		cin>>n;
        int y = 0;
        int z = x;
        vector <int> a;
		for(int i=0;i<n*2-1;i++)
		{
			if(i<n )x++;
            else x--;
            z = x+y;
            a.push_back(z%10);
            y = z/10;
		}
        for(int i=a.size()-1;i>=0;i--) cout<<a[i];
		cout<< endl;
	}
}

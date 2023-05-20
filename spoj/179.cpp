#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x,y,count=1;
	cin>>x>>y;
	if(y==1) y=7;
	else if(y==2) y=6;
	else if(y==3) y=5;
	else if(y==4) y=4;
	else if(y==5) y=3;
	else if(y==6) y=2;
	else if(y==7) y=1;
	if ( x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12 )
	{
		int a = 31 - y ;
		count+= a/7;
		if ( a % 7 != 0 ) count++;
	}
	else if ( x == 2 )
	{
		int a = 28 - y;
		count+= a/7;
		if ( a % 7 != 0 ) count++;
	}
	else if ( x == 4 || x == 6 || x == 9 || x == 11 )
	{
		int a = 30 - y;
		count+= a/7;
		if ( a % 7 != 0 ) count++;
	}
	cout << count;
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

struct giavi
{
	int chua;
	int cay;
};
int main()
{
	int n;
	cin>>n;
	vector <giavi> a(n);
	vector <int> b;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].chua>>a[i].cay;
	}
	int sum1,sum2;
	for(int i=0;i<n;i++)
	{
		sum1=1,sum2=0;
		sum1*=a[i].chua; sum2+=a[i].cay;
		b.push_back(abs(sum1-sum2));
	}
	for(int i=0;i<n-1;i++)
	{
		sum1=1,sum2=0;
		sum1*=a[i].chua; sum2+=a[i].cay;
		for(int j=i+1;j<n;j++)
		{
			sum1*=a[j].chua; sum2+=a[j].cay;
			b.push_back(abs(sum1-sum2));
		}
	}
	sort(b.begin(),b.end());
//	for(int i=0;i<b.size();i++) cout<<b[i]<<" ";
	cout<<b[0];
	return 0;
}


/* test 3

sum1=1, sum2=7, sum2-sum1=6
sum1=2, sum2=6, sum2-sum1=4
.....
sum1=4, sum2=9, sum2-sum1=4

sum1=1*2, sum2=7+6, sum2-sum1=11
sum1=1*2*3, sum2=7+6+8, sum2-sum1=...
sum1=1*2*3*4, sum2=..........

sum1=2*3, sum2=6+8, sum2-sum1=....
sum1=2*3*4, sum2=6+8+9, .....
.......

*/





















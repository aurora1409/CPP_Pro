#include<bits/stdc++.h>

using namespace std;

struct number{
	int amount[];
	int value[];
	number(){
		amount=0;
		value=0;
	}
};
compare(number x1,number x2){
	if(x1.amount==x2.amount) return x1.value<x2.value;
	return x1.amount>x2.amount;
}
void solve(){
	int n;
	vector<int> a(n);
	vector <number> b(n);
	vector <int> mp(n);
	cin>>n;
	int m=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(mp[a[i]]==0) mp[a[i]]++m;
		int x=mp[a[i]];
		b[x].value_type=a[i];
		b[x].value++;	
	}
	sort(b.begin(),b.end(),compare);
	for(int i=0;i<=m;i++)
		for(int j=1;j<b[i].amount;j++)
	//for(int i=0;i<n;i++){
		
	}
}
int main()
{
	return 0;
}

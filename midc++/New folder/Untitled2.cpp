//
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
	if(x1.amount>x2.amount) return 1;
	return 0;
}
void solve(){
	int n;
	int a[100]={};
	vector <number> list(2)
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n,compare);
	for(int i=0;i<n;i++){
		
	}
}
int main()
{
	return 0;
}


/*
co t bo test
moi bo test bao gom so n va mang co n so nguyen
in ra so luong so nguyen to trong mang
*/

#include<bits/stdc++.h>
#define MAX 1000000
#define ll long long

using namespace std;
int n=MAX;
bool isPrime[MAX]={true};

//bool NT(int x){
//	if (x<2) return false;
//	for (int i=2;i*i<=x;i++){
//		if (x%i==0) return false;
//	}
//	return true;
//}

void SNT(){
	isPrime[0]=false;
	isPrime[1]=false;
	for(int i=2;i<n;i++){
		isPrime[i]=true;
	}
	
	for (int i=2;i*i<n;i++){
		//if (isPrime[i]==false) continue;
		if (isPrime[i]==true) 
		for (int j=i*i;j<n;j+=i){
			isPrime[j]=false;
		}
	}
}

void solve(){
	int n;
	cin>>n;
	int dem=0;
	for (int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		dem+=isPrime[tmp];
	}
	cout<<dem<<endl;
}

int main()
{
	SNT();
//	vector<bool> a(100,true);
//	for (int i=0;i<100;i++){
//		cout<<a[i];
//	}
	int t;
	cin>>t;
	while (t--){
		solve();
	}
	
//	1
//	4
//	1 2 3 100
//	2
	//Co t bo test
	//Moi bo test bao gom so n, 
	//mang co a[n] co n so nguyen
	//Dem xem trong mang co bao nhieu SNT
}



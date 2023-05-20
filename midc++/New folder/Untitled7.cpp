#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct Car{
	double a;
	double b;
	int vt;
};

bool cmp(Car x, Car y){
	if (x.a/x.b==y.a/y.b){
		return x.a<y.a;
	}
	return x.a/x.b > y.a/y.b;
}

void printC(vector<Car> list){
	for (int i=0;i<list.size();i++){
		cout<<list[i].vt<<" ";//<<" "<<list[i].a<<" "<<list[i].b<<endl;
	}
}

int main()
{
	vector<Car> list;
	int n;
	cin>>n;
	list.resize(n);
	for (int i=0;i<n;i++){
		cin>>list[i].a;
		list[i].vt=i+1;
	}
	for (int i=0;i<n;i++){
		cin>>list[i].b;
	}
	sort(list.begin(),list.end(),cmp);
	
	ll ans=0;
	ll time=0;
	for (int i=0;i<n;i++){
		time+=list[i].b;
		ans+=list[i].a*time;
	}
	cout<<ans<<endl;
	printC(list);
}


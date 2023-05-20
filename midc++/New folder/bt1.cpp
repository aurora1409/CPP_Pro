#include<bits/stdc++.h>

using namespace std;

struct danhsach{
	string name;
	int age;
	float gpa;
	
};
bool namecompare(danhsach x1, danhsach x2)
{
	return x1.name<x2.name;
}
bool agecompare(danhsach x1, danhsach x2)
{
	return x1.age<x2.age;
}
bool gpacompare(danhsach x1, danhsach x2)
{
	return x1.gpa>x2.gpa;
}
void solve()
{
	int n,k;
	cin>>n>>k;
	vector <danhsach> a(n);
	for(int i=0;i<n;i++)
	{
		cin.ignore();
		//getline(cin,a[i].name);
		cin>>a[i].name;
		cin>>a[i].age;
		cin>>a[i].gpa;
	}
	if(k==0) sort(a.begin(),a.end(),namecompare);
	if(k==1) sort(a.begin(),a.end(),agecompare);
	if(k==2) sort(a.begin(),a.end(),gpacompare);
	for(int i=0;i<n;i++)
	{
		cout<<a[i].name<<" "<<a[i].age<<" "<<fixed<<setprecision(1)<<a[i].gpa<<endl;
	}
}
int main()
{
	solve();
	return 0;
}


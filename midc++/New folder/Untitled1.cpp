#include<bits/stdc++.h>

using namespace std;

struct student{
	string name;
	bool gender;
	string msv;
};
bool compare(student x1, student x2){
	if(x1.msv>x2.msv) return 1;
	return 0;
}
void solve(){
	int n;
	cin>>n;
	vector<student> list(n);
	for(int i=0;i<n;i++){
		cin.ignore();
		//student tmp;
		getline(cin,list[i].name);
		cin>>list[i].gender;
		cin>>list[i].msv;
	}
	sort(list.begin(),list.end(),compare);
	for(int i=0;i<n;i++){
		cout<<list[i].name<<" "<<list[i].gender<<" "<<list[i].msv<<endl;
	}
}
int main()
{
	solve();
	return 0;
}


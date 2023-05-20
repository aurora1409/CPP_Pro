#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define quickly ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;
 
long stack[1001];
int Top=0;
 
void init () {
    Top=0;
}
 
void push (long a) {
    Top++;
    stack[Top]=a;
}
 
int empty () {
    if (Top==0) return 1;
    else return 0;
}
 
void pop () {
    if (empty ()==0) {
        Top--;
    }
}
 
long top () {
    if (empty ()==1) return -1;
    return stack[Top];
}
 
int size () {
    return Top;
}
 
void end () {
    return;
}
 
int main () {
    quickly;
	string s;
	int a;
	while(1)
	{
		cin>>s;
		if(s=="end") break;
		else if(s=="init") init();
		else if(s=="push")
		{
			cin>>a;
			push(a);
		}
		else if(s=="pop") pop();
		else if(s=="top") cout<<top()<<endl;
		else if(s=="size") cout<<size()<<endl;
		else cout<<empty()<<endl;
	}
   
    return 0;
}

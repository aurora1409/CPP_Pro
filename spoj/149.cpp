#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long l, r, x;
    cin>>l>>r>>x;
    //output
    long long b=x;
    long long s=1;
    int kt=0;
    if (s>=l && s<=r) {
        cout<<s<<" ";
        kt=1;
    } //TH x^0;
    if (b>=l && b<=r) {
        cout<<b<<" ";
        kt=1;
    } //TH x^1;
    if (b<=r) {
        s=b; //b==x;
        while ((r/s)>=b) {
            x=x*b;
            s=x;
            if (s>=l && s<=r) {
                cout<<s<<" ";
                kt=1;
            }
        }
    }
    if (kt==0) {
        cout<<"-1";
    }
 
    return 0;
	return 0;
}


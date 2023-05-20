#include<bits/stdc++.h>

using namespace std;

int check(int e)
{
	if(e==4||e==7||e==10||e==14||e==17||e==20||e==24||e==27||e==30||e==34||e==37||e==40||e==44||e==47||e==50||e==54||e==57||e==60)
		return 1;
	else if(e==1||e==8||e==11||e==18||e==21||e==28||e==31||e==38||e==41||e==48||e==51||e==58||e==61)
		return 2;
	else if(e==5||e==15||e==25||e==35||e==45||e==55) return 3;
	else if(e==2||e==12||e==22||e==32||e==42||e==52||e==62) return 4;
	else if(e==9||e==19||e==29||e==39||e==49||e==59) return 5;
	else if(e==6||e==16||e==26||e==36) return 6;
	else if(e==3||e==13||e==23||e==33||e==43) return 8;
	else if(e==46||e==56) return 7;
	else if(e==53) return 9;
}
int main()
{
	int a,b,d=0;
	cin>>a>>b;
	for(int i=a+1;i<=62;i++)
	{
		if(check(i)==b) 
		{
			d=1;
			cout<<i;
			break;
		}
	}
	if(d==0) cout<<"0";
	return 0;
}


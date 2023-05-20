#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	string s;
	while(cin>>n>>s)
	{
		if(n==0) break;
		for(int i=0;i<s.size();i++)
		{
			if(n==1)
			{
				if(s[i]=='A') s[i]='B';
				else if(s[i]=='B') s[i]='C'; else if(s[i]=='C') s[i]='D';
				else if(s[i]=='D') s[i]='E'; else if(s[i]=='E') s[i]='F';
				else if(s[i]=='F') s[i]='G'; else if(s[i]=='G') s[i]='H';
				else if(s[i]=='H') s[i]='I'; else if(s[i]=='I') s[i]='J';
				else if(s[i]=='J') s[i]='K'; else if(s[i]=='K') s[i]='L';
				else if(s[i]=='L') s[i]='M'; else if(s[i]=='M') s[i]='N';
				else if(s[i]=='N') s[i]='O'; else if(s[i]=='O') s[i]='P';
				else if(s[i]=='P') s[i]='Q'; else if(s[i]=='Q') s[i]='R';
				else if(s[i]=='R') s[i]='S'; else if(s[i]=='S') s[i]='T';
				else if(s[i]=='T') s[i]='U'; else if(s[i]=='U') s[i]='V';
				else if(s[i]=='V') s[i]='W'; else if(s[i]=='W') s[i]='X';
				else if(s[i]=='X') s[i]='Y'; else if(s[i]=='Y') s[i]='Z';
				else if(s[i]=='Z') s[i]='_'; else if(s[i]=='_') s[i]='.';
				else if(s[i]=='.') s[i]='A';
			}
			else if(n==2)
			{
				if(s[i]=='A') s[i]='C';
				else if(s[i]=='B') s[i]='D'; else if(s[i]=='C') s[i]='E';
				else if(s[i]=='D') s[i]='F'; else if(s[i]=='E') s[i]='G';
				else if(s[i]=='F') s[i]='H'; else if(s[i]=='G') s[i]='I';
				else if(s[i]=='H') s[i]='J'; else if(s[i]=='I') s[i]='K';
				else if(s[i]=='J') s[i]='L'; else if(s[i]=='K') s[i]='M';
				else if(s[i]=='L') s[i]='N'; else if(s[i]=='M') s[i]='O';
				else if(s[i]=='N') s[i]='P'; else if(s[i]=='O') s[i]='Q';
				else if(s[i]=='P') s[i]='R'; else if(s[i]=='Q') s[i]='S';
				else if(s[i]=='R') s[i]='T'; else if(s[i]=='S') s[i]='U';
				else if(s[i]=='T') s[i]='V'; else if(s[i]=='U') s[i]='W';
				else if(s[i]=='V') s[i]='X'; else if(s[i]=='W') s[i]='Y';
				else if(s[i]=='X') s[i]='Z'; else if(s[i]=='Y') s[i]='_';
				else if(s[i]=='Z') s[i]='.'; else if(s[i]=='_') s[i]='A';
				else if(s[i]=='.') s[i]='B';
			}
			else if(n==3)
			{
				if(s[i]=='A') s[i]='D';
				else if(s[i]=='B') s[i]='E'; else if(s[i]=='C') s[i]='F';
				else if(s[i]=='D') s[i]='G'; else if(s[i]=='E') s[i]='H';
				else if(s[i]=='F') s[i]='I'; else if(s[i]=='G') s[i]='J';
				else if(s[i]=='H') s[i]='K'; else if(s[i]=='I') s[i]='L';
				else if(s[i]=='J') s[i]='M'; else if(s[i]=='K') s[i]='N';
				else if(s[i]=='L') s[i]='O'; else if(s[i]=='M') s[i]='P';
				else if(s[i]=='N') s[i]='Q'; else if(s[i]=='O') s[i]='R';
				else if(s[i]=='P') s[i]='S'; else if(s[i]=='Q') s[i]='T';
				else if(s[i]=='R') s[i]='U'; else if(s[i]=='S') s[i]='V';
				else if(s[i]=='T') s[i]='W'; else if(s[i]=='U') s[i]='X';
				else if(s[i]=='V') s[i]='Y'; else if(s[i]=='W') s[i]='Z';
				else if(s[i]=='X') s[i]='_'; else if(s[i]=='Y') s[i]='.';
				else if(s[i]=='Z') s[i]='A'; else if(s[i]=='_') s[i]='B';
				else if(s[i]=='.') s[i]='C';
			}
			else if(n==4)
			{
				if(s[i]=='A') s[i]='E';
				else if(s[i]=='B') s[i]='F'; else if(s[i]=='C') s[i]='G';
				else if(s[i]=='D') s[i]='H'; else if(s[i]=='E') s[i]='I';
				else if(s[i]=='F') s[i]='J'; else if(s[i]=='G') s[i]='K';
				else if(s[i]=='H') s[i]='L'; else if(s[i]=='I') s[i]='M';
				else if(s[i]=='J') s[i]='N'; else if(s[i]=='K') s[i]='O';
				else if(s[i]=='L') s[i]='P'; else if(s[i]=='M') s[i]='Q';
				else if(s[i]=='N') s[i]='R'; else if(s[i]=='O') s[i]='S';
				else if(s[i]=='P') s[i]='T'; else if(s[i]=='Q') s[i]='U';
				else if(s[i]=='R') s[i]='V'; else if(s[i]=='S') s[i]='W';
				else if(s[i]=='T') s[i]='X'; else if(s[i]=='U') s[i]='Y';
				else if(s[i]=='V') s[i]='Z'; else if(s[i]=='W') s[i]='_';
				else if(s[i]=='X') s[i]='.'; else if(s[i]=='Y') s[i]='A';
				else if(s[i]=='Z') s[i]='B'; else if(s[i]=='_') s[i]='C';
				else if(s[i]=='.') s[i]='D';
			}
			else if(n==5)
			{
				if(s[i]=='A') s[i]='F';
				else if(s[i]=='B') s[i]='J'; else if(s[i]=='C') s[i]='H';
				else if(s[i]=='D') s[i]='I'; else if(s[i]=='E') s[i]='J';
				else if(s[i]=='F') s[i]='K'; else if(s[i]=='G') s[i]='L';
				else if(s[i]=='H') s[i]='M'; else if(s[i]=='I') s[i]='N';
				else if(s[i]=='J') s[i]='O'; else if(s[i]=='K') s[i]='P';
				else if(s[i]=='L') s[i]='Q'; else if(s[i]=='M') s[i]='R';
				else if(s[i]=='N') s[i]='S'; else if(s[i]=='O') s[i]='T';
				else if(s[i]=='P') s[i]='U'; else if(s[i]=='Q') s[i]='V';
				else if(s[i]=='R') s[i]='W'; else if(s[i]=='S') s[i]='X';
				else if(s[i]=='T') s[i]='Y'; else if(s[i]=='U') s[i]='Z';
				else if(s[i]=='V') s[i]='_'; else if(s[i]=='W') s[i]='.';
				else if(s[i]=='X') s[i]='A'; else if(s[i]=='Y') s[i]='B';
				else if(s[i]=='Z') s[i]='C'; else if(s[i]=='_') s[i]='D';
				else if(s[i]=='.') s[i]='E';
			}
			
		}
	}
	return 0;
}


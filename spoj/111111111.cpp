#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	string s;
	while(1)
	{
		cin>>n;
	//	cin.ignore();
		if(n==0) break;
		cin>>s;
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
				else if(s[i]=='B') s[i]='G'; else if(s[i]=='C') s[i]='H';
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
			else if(n==6)
			{
				if(s[i]=='A') s[i]='G';
				else if(s[i]=='B') s[i]='H'; else if(s[i]=='C') s[i]='I';
				else if(s[i]=='D') s[i]='J'; else if(s[i]=='E') s[i]='K';
				else if(s[i]=='F') s[i]='L'; else if(s[i]=='G') s[i]='M';
				else if(s[i]=='H') s[i]='N'; else if(s[i]=='I') s[i]='O';
				else if(s[i]=='J') s[i]='P'; else if(s[i]=='K') s[i]='Q';
				else if(s[i]=='L') s[i]='R'; else if(s[i]=='M') s[i]='S';
				else if(s[i]=='N') s[i]='T'; else if(s[i]=='O') s[i]='U';
				else if(s[i]=='P') s[i]='V'; else if(s[i]=='Q') s[i]='W';
				else if(s[i]=='R') s[i]='X'; else if(s[i]=='S') s[i]='Y';
				else if(s[i]=='T') s[i]='Z'; else if(s[i]=='U') s[i]='_';
				else if(s[i]=='V') s[i]='.'; else if(s[i]=='W') s[i]='A';
				else if(s[i]=='X') s[i]='B'; else if(s[i]=='Y') s[i]='C';
				else if(s[i]=='Z') s[i]='D'; else if(s[i]=='_') s[i]='E';
				else if(s[i]=='.') s[i]='F';
			}
			else if(n==7)
			{
				if(s[i]=='A') s[i]='H';
				else if(s[i]=='B') s[i]='I'; else if(s[i]=='C') s[i]='J';
				else if(s[i]=='D') s[i]='K'; else if(s[i]=='E') s[i]='L';
				else if(s[i]=='F') s[i]='M'; else if(s[i]=='G') s[i]='N';
				else if(s[i]=='H') s[i]='O'; else if(s[i]=='I') s[i]='P';
				else if(s[i]=='J') s[i]='Q'; else if(s[i]=='K') s[i]='R';
				else if(s[i]=='L') s[i]='S'; else if(s[i]=='M') s[i]='T';
				else if(s[i]=='N') s[i]='U'; else if(s[i]=='O') s[i]='V';
				else if(s[i]=='P') s[i]='W'; else if(s[i]=='Q') s[i]='X';
				else if(s[i]=='R') s[i]='Y'; else if(s[i]=='S') s[i]='Z';
				else if(s[i]=='T') s[i]='_'; else if(s[i]=='U') s[i]='.';
				else if(s[i]=='V') s[i]='A'; else if(s[i]=='W') s[i]='B';
				else if(s[i]=='X') s[i]='C'; else if(s[i]=='Y') s[i]='D';
				else if(s[i]=='Z') s[i]='E'; else if(s[i]=='_') s[i]='F';
				else if(s[i]=='.') s[i]='G';
			}
			else if(n==8)
			{
				if(s[i]=='A') s[i]='I';
				else if(s[i]=='B') s[i]='J'; else if(s[i]=='P') s[i]='X';
				else if(s[i]=='C') s[i]='K'; else if(s[i]=='Q') s[i]='Y';
				else if(s[i]=='D') s[i]='L'; else if(s[i]=='R') s[i]='Z';
				else if(s[i]=='E') s[i]='M'; else if(s[i]=='S') s[i]='_';
				else if(s[i]=='F') s[i]='N'; else if(s[i]=='T') s[i]='.';
				else if(s[i]=='G') s[i]='O'; else if(s[i]=='U') s[i]='A';
				else if(s[i]=='H') s[i]='P'; else if(s[i]=='V') s[i]='B';
				else if(s[i]=='I') s[i]='Q'; else if(s[i]=='W') s[i]='C';
				else if(s[i]=='J') s[i]='R'; else if(s[i]=='X') s[i]='D';
				else if(s[i]=='K') s[i]='S'; else if(s[i]=='Y') s[i]='E';
				else if(s[i]=='L') s[i]='T'; else if(s[i]=='Z') s[i]='F';
				else if(s[i]=='M') s[i]='U'; else if(s[i]=='_') s[i]='G';
				else if(s[i]=='N') s[i]='V'; else if(s[i]=='.') s[i]='H';
				else if(s[i]=='O') s[i]='W';
			}
			else if(n==9)
			{
				if(s[i]=='A') s[i]='J';
				else if(s[i]=='B') s[i]='K'; else if(s[i]=='P') s[i]='Y';
				else if(s[i]=='C') s[i]='L'; else if(s[i]=='Q') s[i]='Z';
				else if(s[i]=='D') s[i]='M'; else if(s[i]=='R') s[i]='_';
				else if(s[i]=='E') s[i]='N'; else if(s[i]=='S') s[i]='.';
				else if(s[i]=='F') s[i]='O'; else if(s[i]=='T') s[i]='A';
				else if(s[i]=='G') s[i]='P'; else if(s[i]=='U') s[i]='B';
				else if(s[i]=='H') s[i]='Q'; else if(s[i]=='V') s[i]='C';
				else if(s[i]=='I') s[i]='R'; else if(s[i]=='W') s[i]='D';
				else if(s[i]=='J') s[i]='S'; else if(s[i]=='X') s[i]='E';
				else if(s[i]=='K') s[i]='T'; else if(s[i]=='Y') s[i]='F';
				else if(s[i]=='L') s[i]='U'; else if(s[i]=='Z') s[i]='G';
				else if(s[i]=='M') s[i]='V'; else if(s[i]=='_') s[i]='H';
				else if(s[i]=='N') s[i]='W'; else if(s[i]=='.') s[i]='I';
				else if(s[i]=='O') s[i]='X';
			}
			else if(n==10)
			{
				if(s[i]=='A') s[i]='K';
				else if(s[i]=='B') s[i]='L'; else if(s[i]=='P') s[i]='Z';
				else if(s[i]=='C') s[i]='M'; else if(s[i]=='Q') s[i]='_';
				else if(s[i]=='D') s[i]='N'; else if(s[i]=='R') s[i]='.';
				else if(s[i]=='E') s[i]='O'; else if(s[i]=='S') s[i]='A';
				else if(s[i]=='F') s[i]='P'; else if(s[i]=='T') s[i]='B';
				else if(s[i]=='G') s[i]='Q'; else if(s[i]=='U') s[i]='C';
				else if(s[i]=='H') s[i]='R'; else if(s[i]=='V') s[i]='D';
				else if(s[i]=='I') s[i]='S'; else if(s[i]=='W') s[i]='E';
				else if(s[i]=='J') s[i]='T'; else if(s[i]=='X') s[i]='F';
				else if(s[i]=='K') s[i]='U'; else if(s[i]=='Y') s[i]='G';
				else if(s[i]=='L') s[i]='V'; else if(s[i]=='Z') s[i]='H';
				else if(s[i]=='M') s[i]='W'; else if(s[i]=='_') s[i]='I';
				else if(s[i]=='N') s[i]='X'; else if(s[i]=='.') s[i]='J';
				else if(s[i]=='O') s[i]='Y';
			}
			else if(n==11)
			{
				if(s[i]=='A') s[i]='L';
				else if(s[i]=='B') s[i]='M'; else if(s[i]=='P') s[i]='_';
				else if(s[i]=='C') s[i]='N'; else if(s[i]=='Q') s[i]='.';
				else if(s[i]=='D') s[i]='O'; else if(s[i]=='R') s[i]='A';
				else if(s[i]=='E') s[i]='P'; else if(s[i]=='S') s[i]='B';
				else if(s[i]=='F') s[i]='Q'; else if(s[i]=='T') s[i]='C';
				else if(s[i]=='G') s[i]='R'; else if(s[i]=='U') s[i]='D';
				else if(s[i]=='H') s[i]='S'; else if(s[i]=='V') s[i]='E';
				else if(s[i]=='I') s[i]='T'; else if(s[i]=='W') s[i]='F';
				else if(s[i]=='J') s[i]='U'; else if(s[i]=='X') s[i]='G';
				else if(s[i]=='K') s[i]='V'; else if(s[i]=='Y') s[i]='H';
				else if(s[i]=='L') s[i]='W'; else if(s[i]=='Z') s[i]='I';
				else if(s[i]=='M') s[i]='X'; else if(s[i]=='_') s[i]='J';
				else if(s[i]=='N') s[i]='Y'; else if(s[i]=='.') s[i]='K';
				else if(s[i]=='O') s[i]='Z';
			}
			else if(n==12)
			{
				if(s[i]=='A') s[i]='M';
				else if(s[i]=='B') s[i]='N'; else if(s[i]=='P') s[i]='.';
				else if(s[i]=='C') s[i]='O'; else if(s[i]=='Q') s[i]='A';
				else if(s[i]=='D') s[i]='P'; else if(s[i]=='R') s[i]='B';
				else if(s[i]=='E') s[i]='Q'; else if(s[i]=='S') s[i]='C';
				else if(s[i]=='F') s[i]='R'; else if(s[i]=='T') s[i]='D';
				else if(s[i]=='G') s[i]='S'; else if(s[i]=='U') s[i]='E';
				else if(s[i]=='H') s[i]='T'; else if(s[i]=='V') s[i]='F';
				else if(s[i]=='I') s[i]='U'; else if(s[i]=='W') s[i]='G';
				else if(s[i]=='J') s[i]='V'; else if(s[i]=='X') s[i]='H';
				else if(s[i]=='K') s[i]='W'; else if(s[i]=='Y') s[i]='I';
				else if(s[i]=='L') s[i]='X'; else if(s[i]=='Z') s[i]='J';
				else if(s[i]=='M') s[i]='Y'; else if(s[i]=='_') s[i]='K';
				else if(s[i]=='N') s[i]='Z'; else if(s[i]=='.') s[i]='L';
				else if(s[i]=='O') s[i]='_';
			}
			else if(n==13)
			{
				if(s[i]=='A') s[i]='N';
				else if(s[i]=='B') s[i]='O'; else if(s[i]=='P') s[i]='A';
				else if(s[i]=='C') s[i]='P'; else if(s[i]=='Q') s[i]='B';
				else if(s[i]=='D') s[i]='Q'; else if(s[i]=='R') s[i]='C';
				else if(s[i]=='E') s[i]='R'; else if(s[i]=='S') s[i]='D';
				else if(s[i]=='F') s[i]='S'; else if(s[i]=='T') s[i]='E';
				else if(s[i]=='G') s[i]='T'; else if(s[i]=='U') s[i]='F';
				else if(s[i]=='H') s[i]='U'; else if(s[i]=='V') s[i]='G';
				else if(s[i]=='I') s[i]='V'; else if(s[i]=='W') s[i]='H';
				else if(s[i]=='J') s[i]='W'; else if(s[i]=='X') s[i]='I';
				else if(s[i]=='K') s[i]='X'; else if(s[i]=='Y') s[i]='J';
				else if(s[i]=='L') s[i]='Y'; else if(s[i]=='Z') s[i]='K';
				else if(s[i]=='M') s[i]='Z'; else if(s[i]=='_') s[i]='L';
				else if(s[i]=='N') s[i]='_'; else if(s[i]=='.') s[i]='M';
				else if(s[i]=='O') s[i]='.';
			}
			else if(n==14)
			{
				if(s[i]=='A') s[i]='O';
				else if(s[i]=='B') s[i]='P'; else if(s[i]=='P') s[i]='B';
				else if(s[i]=='C') s[i]='Q'; else if(s[i]=='Q') s[i]='C';
				else if(s[i]=='D') s[i]='R'; else if(s[i]=='R') s[i]='D';
				else if(s[i]=='E') s[i]='S'; else if(s[i]=='S') s[i]='E';
				else if(s[i]=='F') s[i]='T'; else if(s[i]=='T') s[i]='F';
				else if(s[i]=='G') s[i]='U'; else if(s[i]=='U') s[i]='G';
				else if(s[i]=='H') s[i]='V'; else if(s[i]=='V') s[i]='H';
				else if(s[i]=='I') s[i]='W'; else if(s[i]=='W') s[i]='I';
				else if(s[i]=='J') s[i]='X'; else if(s[i]=='X') s[i]='J';
				else if(s[i]=='K') s[i]='Y'; else if(s[i]=='Y') s[i]='K';
				else if(s[i]=='L') s[i]='Z'; else if(s[i]=='Z') s[i]='L';
				else if(s[i]=='M') s[i]='_'; else if(s[i]=='_') s[i]='M';
				else if(s[i]=='N') s[i]='.'; else if(s[i]=='.') s[i]='N';
				else if(s[i]=='O') s[i]='A';
			}
			else if(n==15)
			{
				if(s[i]=='A') s[i]='P';
				else if(s[i]=='B') s[i]='Q'; else if(s[i]=='P') s[i]='C';
				else if(s[i]=='C') s[i]='R'; else if(s[i]=='Q') s[i]='D';
				else if(s[i]=='D') s[i]='S'; else if(s[i]=='R') s[i]='E';
				else if(s[i]=='E') s[i]='T'; else if(s[i]=='S') s[i]='F';
				else if(s[i]=='F') s[i]='U'; else if(s[i]=='T') s[i]='G';
				else if(s[i]=='G') s[i]='V'; else if(s[i]=='U') s[i]='H';
				else if(s[i]=='H') s[i]='W'; else if(s[i]=='V') s[i]='I';
				else if(s[i]=='I') s[i]='X'; else if(s[i]=='W') s[i]='J';
				else if(s[i]=='J') s[i]='Y'; else if(s[i]=='X') s[i]='K';
				else if(s[i]=='K') s[i]='Z'; else if(s[i]=='Y') s[i]='L';
				else if(s[i]=='L') s[i]='_'; else if(s[i]=='Z') s[i]='M';
				else if(s[i]=='M') s[i]='.'; else if(s[i]=='_') s[i]='N';
				else if(s[i]=='N') s[i]='A'; else if(s[i]=='.') s[i]='O';
				else if(s[i]=='O') s[i]='B';
			}
			else if(n==16)
			{
				if(s[i]=='A') s[i]='Q';
				else if(s[i]=='B') s[i]='R'; else if(s[i]=='P') s[i]='D';
				else if(s[i]=='C') s[i]='S'; else if(s[i]=='Q') s[i]='E';
				else if(s[i]=='D') s[i]='T'; else if(s[i]=='R') s[i]='F';
				else if(s[i]=='E') s[i]='U'; else if(s[i]=='S') s[i]='G';
				else if(s[i]=='F') s[i]='V'; else if(s[i]=='T') s[i]='H';
				else if(s[i]=='G') s[i]='W'; else if(s[i]=='U') s[i]='I';
				else if(s[i]=='H') s[i]='X'; else if(s[i]=='V') s[i]='J';
				else if(s[i]=='I') s[i]='Y'; else if(s[i]=='W') s[i]='K';
				else if(s[i]=='J') s[i]='Z'; else if(s[i]=='X') s[i]='L';
				else if(s[i]=='K') s[i]='_'; else if(s[i]=='Y') s[i]='M';
				else if(s[i]=='L') s[i]='.'; else if(s[i]=='Z') s[i]='N';
				else if(s[i]=='M') s[i]='A'; else if(s[i]=='_') s[i]='O';
				else if(s[i]=='N') s[i]='B'; else if(s[i]=='.') s[i]='P';
				else if(s[i]=='O') s[i]='C';
			}
			else if(n==17)
			{
				if(s[i]=='A') s[i]='R';
				else if(s[i]=='B') s[i]='S'; else if(s[i]=='P') s[i]='E';
				else if(s[i]=='C') s[i]='T'; else if(s[i]=='Q') s[i]='F';
				else if(s[i]=='D') s[i]='U'; else if(s[i]=='R') s[i]='G';
				else if(s[i]=='E') s[i]='V'; else if(s[i]=='S') s[i]='H';
				else if(s[i]=='F') s[i]='W'; else if(s[i]=='T') s[i]='I';
				else if(s[i]=='G') s[i]='X'; else if(s[i]=='U') s[i]='J';
				else if(s[i]=='H') s[i]='Y'; else if(s[i]=='V') s[i]='K';
				else if(s[i]=='I') s[i]='Z'; else if(s[i]=='W') s[i]='L';
				else if(s[i]=='J') s[i]='_'; else if(s[i]=='X') s[i]='M';
				else if(s[i]=='K') s[i]='.'; else if(s[i]=='Y') s[i]='N';
				else if(s[i]=='L') s[i]='A'; else if(s[i]=='Z') s[i]='O';
				else if(s[i]=='M') s[i]='B'; else if(s[i]=='_') s[i]='P';
				else if(s[i]=='N') s[i]='C'; else if(s[i]=='.') s[i]='Q';
				else if(s[i]=='O') s[i]='D';
			}
			else if(n==18)
			{
				if(s[i]=='A') s[i]='S';
				else if(s[i]=='B') s[i]='T'; else if(s[i]=='P') s[i]='F';
				else if(s[i]=='C') s[i]='U'; else if(s[i]=='Q') s[i]='G';
				else if(s[i]=='D') s[i]='V'; else if(s[i]=='R') s[i]='H';
				else if(s[i]=='E') s[i]='W'; else if(s[i]=='S') s[i]='I';
				else if(s[i]=='F') s[i]='X'; else if(s[i]=='T') s[i]='J';
				else if(s[i]=='G') s[i]='Y'; else if(s[i]=='U') s[i]='K';
				else if(s[i]=='H') s[i]='Z'; else if(s[i]=='V') s[i]='L';
				else if(s[i]=='I') s[i]='_'; else if(s[i]=='W') s[i]='M';
				else if(s[i]=='J') s[i]='.'; else if(s[i]=='X') s[i]='N';
				else if(s[i]=='K') s[i]='A'; else if(s[i]=='Y') s[i]='O';
				else if(s[i]=='L') s[i]='B'; else if(s[i]=='Z') s[i]='P';
				else if(s[i]=='M') s[i]='C'; else if(s[i]=='_') s[i]='Q';
				else if(s[i]=='N') s[i]='D'; else if(s[i]=='.') s[i]='R';
				else if(s[i]=='O') s[i]='E';
			}
			else if(n==19)
			{
				if(s[i]=='A') s[i]='T';
				else if(s[i]=='B') s[i]='U'; else if(s[i]=='P') s[i]='G';
				else if(s[i]=='C') s[i]='V'; else if(s[i]=='Q') s[i]='H';
				else if(s[i]=='D') s[i]='W'; else if(s[i]=='R') s[i]='I';
				else if(s[i]=='E') s[i]='X'; else if(s[i]=='S') s[i]='J';
				else if(s[i]=='F') s[i]='Y'; else if(s[i]=='T') s[i]='K';
				else if(s[i]=='G') s[i]='Z'; else if(s[i]=='U') s[i]='L';
				else if(s[i]=='H') s[i]='_'; else if(s[i]=='V') s[i]='M';
				else if(s[i]=='I') s[i]='.'; else if(s[i]=='W') s[i]='N';
				else if(s[i]=='J') s[i]='A'; else if(s[i]=='X') s[i]='O';
				else if(s[i]=='K') s[i]='B'; else if(s[i]=='Y') s[i]='P';
				else if(s[i]=='L') s[i]='C'; else if(s[i]=='Z') s[i]='Q';
				else if(s[i]=='M') s[i]='D'; else if(s[i]=='_') s[i]='R';
				else if(s[i]=='N') s[i]='E'; else if(s[i]=='.') s[i]='S';
				else if(s[i]=='O') s[i]='F';
			}
			else if(n==20)
			{
				if(s[i]=='A') s[i]='U';
				else if(s[i]=='B') s[i]='V'; else if(s[i]=='P') s[i]='H';
				else if(s[i]=='C') s[i]='W'; else if(s[i]=='Q') s[i]='I';
				else if(s[i]=='D') s[i]='X'; else if(s[i]=='R') s[i]='J';
				else if(s[i]=='E') s[i]='Y'; else if(s[i]=='S') s[i]='K';
				else if(s[i]=='F') s[i]='Z'; else if(s[i]=='T') s[i]='L';
				else if(s[i]=='G') s[i]='_'; else if(s[i]=='U') s[i]='M';
				else if(s[i]=='H') s[i]='.'; else if(s[i]=='V') s[i]='N';
				else if(s[i]=='I') s[i]='A'; else if(s[i]=='W') s[i]='O';
				else if(s[i]=='J') s[i]='B'; else if(s[i]=='X') s[i]='P';
				else if(s[i]=='K') s[i]='C'; else if(s[i]=='Y') s[i]='Q';
				else if(s[i]=='L') s[i]='D'; else if(s[i]=='Z') s[i]='R';
				else if(s[i]=='M') s[i]='E'; else if(s[i]=='_') s[i]='S';
				else if(s[i]=='N') s[i]='F'; else if(s[i]=='.') s[i]='T';
				else if(s[i]=='O') s[i]='G';
			}
			else if(n==21)
			{
				if(s[i]=='A') s[i]='V';
				else if(s[i]=='B') s[i]='W'; else if(s[i]=='P') s[i]='I';
				else if(s[i]=='C') s[i]='X'; else if(s[i]=='Q') s[i]='J';
				else if(s[i]=='D') s[i]='Y'; else if(s[i]=='R') s[i]='K';
				else if(s[i]=='E') s[i]='Z'; else if(s[i]=='S') s[i]='L';
				else if(s[i]=='F') s[i]='_'; else if(s[i]=='T') s[i]='M';
				else if(s[i]=='G') s[i]='.'; else if(s[i]=='U') s[i]='N';
				else if(s[i]=='H') s[i]='A'; else if(s[i]=='V') s[i]='O';
				else if(s[i]=='I') s[i]='B'; else if(s[i]=='W') s[i]='P';
				else if(s[i]=='J') s[i]='C'; else if(s[i]=='X') s[i]='Q';
				else if(s[i]=='K') s[i]='D'; else if(s[i]=='Y') s[i]='R';
				else if(s[i]=='L') s[i]='E'; else if(s[i]=='Z') s[i]='S';
				else if(s[i]=='M') s[i]='F'; else if(s[i]=='_') s[i]='T';
				else if(s[i]=='N') s[i]='G'; else if(s[i]=='.') s[i]='U';
				else if(s[i]=='O') s[i]='H';
			}
			else if(n==22)
			{
				if(s[i]=='A') s[i]='W';
				else if(s[i]=='B') s[i]='X'; else if(s[i]=='P') s[i]='J';
				else if(s[i]=='C') s[i]='Y'; else if(s[i]=='Q') s[i]='K';
				else if(s[i]=='D') s[i]='Z'; else if(s[i]=='R') s[i]='L';
				else if(s[i]=='E') s[i]='_'; else if(s[i]=='S') s[i]='M';
				else if(s[i]=='F') s[i]='.'; else if(s[i]=='T') s[i]='N';
				else if(s[i]=='G') s[i]='A'; else if(s[i]=='U') s[i]='O';
				else if(s[i]=='H') s[i]='B'; else if(s[i]=='V') s[i]='P';
				else if(s[i]=='I') s[i]='C'; else if(s[i]=='W') s[i]='Q';
				else if(s[i]=='J') s[i]='D'; else if(s[i]=='X') s[i]='R';
				else if(s[i]=='K') s[i]='E'; else if(s[i]=='Y') s[i]='S';
				else if(s[i]=='L') s[i]='F'; else if(s[i]=='Z') s[i]='T';
				else if(s[i]=='M') s[i]='G'; else if(s[i]=='_') s[i]='U';
				else if(s[i]=='N') s[i]='H'; else if(s[i]=='.') s[i]='V';
				else if(s[i]=='O') s[i]='I';
			}
			else if(n==23)
			{
				if(s[i]=='A') s[i]='X';
				else if(s[i]=='B') s[i]='Y'; else if(s[i]=='P') s[i]='K';
				else if(s[i]=='C') s[i]='Z'; else if(s[i]=='Q') s[i]='L';
				else if(s[i]=='D') s[i]='_'; else if(s[i]=='R') s[i]='M';
				else if(s[i]=='E') s[i]='.'; else if(s[i]=='S') s[i]='N';
				else if(s[i]=='F') s[i]='A'; else if(s[i]=='T') s[i]='O';
				else if(s[i]=='G') s[i]='B'; else if(s[i]=='U') s[i]='P';
				else if(s[i]=='H') s[i]='C'; else if(s[i]=='V') s[i]='Q';
				else if(s[i]=='I') s[i]='D'; else if(s[i]=='W') s[i]='R';
				else if(s[i]=='J') s[i]='E'; else if(s[i]=='X') s[i]='S';
				else if(s[i]=='K') s[i]='F'; else if(s[i]=='Y') s[i]='T';
				else if(s[i]=='L') s[i]='G'; else if(s[i]=='Z') s[i]='U';
				else if(s[i]=='M') s[i]='H'; else if(s[i]=='_') s[i]='V';
				else if(s[i]=='N') s[i]='I'; else if(s[i]=='.') s[i]='W';
				else if(s[i]=='O') s[i]='J';
			}
			else if(n==24)
			{
				if(s[i]=='A') s[i]='Y';
				else if(s[i]=='B') s[i]='Z'; else if(s[i]=='P') s[i]='L';
				else if(s[i]=='C') s[i]='_'; else if(s[i]=='Q') s[i]='M';
				else if(s[i]=='D') s[i]='.'; else if(s[i]=='R') s[i]='N';
				else if(s[i]=='E') s[i]='A'; else if(s[i]=='S') s[i]='O';
				else if(s[i]=='F') s[i]='B'; else if(s[i]=='T') s[i]='P';
				else if(s[i]=='G') s[i]='C'; else if(s[i]=='U') s[i]='Q';
				else if(s[i]=='H') s[i]='D'; else if(s[i]=='V') s[i]='R';
				else if(s[i]=='I') s[i]='E'; else if(s[i]=='W') s[i]='S';
				else if(s[i]=='J') s[i]='F'; else if(s[i]=='X') s[i]='T';
				else if(s[i]=='K') s[i]='G'; else if(s[i]=='Y') s[i]='U';
				else if(s[i]=='L') s[i]='H'; else if(s[i]=='Z') s[i]='V';
				else if(s[i]=='M') s[i]='I'; else if(s[i]=='_') s[i]='W';
				else if(s[i]=='N') s[i]='J'; else if(s[i]=='.') s[i]='X';
				else if(s[i]=='O') s[i]='K';
			}
			else if(n==25)
			{
				if(s[i]=='A') s[i]='Z';
				else if(s[i]=='B') s[i]='_'; else if(s[i]=='P') s[i]='M';
				else if(s[i]=='C') s[i]='.'; else if(s[i]=='Q') s[i]='N';
				else if(s[i]=='D') s[i]='A'; else if(s[i]=='R') s[i]='O';
				else if(s[i]=='E') s[i]='B'; else if(s[i]=='S') s[i]='P';
				else if(s[i]=='F') s[i]='C'; else if(s[i]=='T') s[i]='W';
				else if(s[i]=='G') s[i]='D'; else if(s[i]=='U') s[i]='R';
				else if(s[i]=='H') s[i]='E'; else if(s[i]=='V') s[i]='S';
				else if(s[i]=='I') s[i]='F'; else if(s[i]=='W') s[i]='T';
				else if(s[i]=='J') s[i]='G'; else if(s[i]=='X') s[i]='U';
				else if(s[i]=='K') s[i]='H'; else if(s[i]=='Y') s[i]='V';
				else if(s[i]=='L') s[i]='I'; else if(s[i]=='Z') s[i]='W';
				else if(s[i]=='M') s[i]='J'; else if(s[i]=='_') s[i]='X';
				else if(s[i]=='N') s[i]='K'; else if(s[i]=='.') s[i]='Y';
				else if(s[i]=='O') s[i]='L';
			}
			else if(n==26)
			{
				if(s[i]=='A') s[i]='_';
				else if(s[i]=='B') s[i]='.'; else if(s[i]=='P') s[i]='N';
				else if(s[i]=='C') s[i]='A'; else if(s[i]=='Q') s[i]='O';
				else if(s[i]=='D') s[i]='B'; else if(s[i]=='R') s[i]='P';
				else if(s[i]=='E') s[i]='C'; else if(s[i]=='S') s[i]='Q';
				else if(s[i]=='F') s[i]='D'; else if(s[i]=='T') s[i]='R';
				else if(s[i]=='G') s[i]='E'; else if(s[i]=='U') s[i]='S';
				else if(s[i]=='H') s[i]='F'; else if(s[i]=='V') s[i]='T';
				else if(s[i]=='I') s[i]='J'; else if(s[i]=='W') s[i]='U';
				else if(s[i]=='J') s[i]='H'; else if(s[i]=='X') s[i]='V';
				else if(s[i]=='K') s[i]='I'; else if(s[i]=='Y') s[i]='W';
				else if(s[i]=='L') s[i]='J'; else if(s[i]=='Z') s[i]='X';
				else if(s[i]=='M') s[i]='K'; else if(s[i]=='_') s[i]='Y';
				else if(s[i]=='N') s[i]='L'; else if(s[i]=='.') s[i]='Z';
				else if(s[i]=='O') s[i]='M';
			}
			else if(n==27)
			{
				if(s[i]=='A') s[i]='.';
				else if(s[i]=='B') s[i]='A'; else if(s[i]=='P') s[i]='O';
				else if(s[i]=='C') s[i]='B'; else if(s[i]=='Q') s[i]='P';
				else if(s[i]=='D') s[i]='C'; else if(s[i]=='R') s[i]='Q';
				else if(s[i]=='E') s[i]='D'; else if(s[i]=='S') s[i]='R';
				else if(s[i]=='F') s[i]='E'; else if(s[i]=='T') s[i]='S';
				else if(s[i]=='G') s[i]='F'; else if(s[i]=='U') s[i]='T';
				else if(s[i]=='H') s[i]='G'; else if(s[i]=='V') s[i]='U';
				else if(s[i]=='I') s[i]='H'; else if(s[i]=='W') s[i]='V';
				else if(s[i]=='J') s[i]='I'; else if(s[i]=='X') s[i]='W';
				else if(s[i]=='K') s[i]='J'; else if(s[i]=='Y') s[i]='X';
				else if(s[i]=='L') s[i]='K'; else if(s[i]=='Z') s[i]='Y';
				else if(s[i]=='M') s[i]='L'; else if(s[i]=='_') s[i]='Z';
				else if(s[i]=='N') s[i]='M'; else if(s[i]=='.') s[i]='_';
				else if(s[i]=='O') s[i]='N';
			}
		}
		for(int i=s.size()-1;i>=0;i--) cout<<s[i];
		cout<<endl;
	}
	return 0;
}


#include<stdio.h>
#include<string.h>

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char a[100005];
		scanf("%s",a);
		int n=strlen(a);
		int a1=a[n-2];
		int a2=a[n-1];
		int x=a1*10+a2;
		if(x%4==0) printf("4");
		else printf("0");
		printf("\n");
	}
	return 0;
}




//1 mod 5 du 1
//n=1: 2 du 2, 3 du 3, 4 du 4 => du 0
//n=2: 2 du 4, 3 du 4, 4 du 6 => du 0
//n=3: 2 du 3, 3 du 2, 4 du 4 => du 0
//n=4:      1       1,      6       4
//  5:      2       3
//  6:      4

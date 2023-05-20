// phai nhap ki tu c truoc va nhap chuoi sau





#include<stdio.h>
#include<string.h>

int main()
{
	char s[100];
	char c;
	scanf("%c",&c);
	scanf("%s",s);
	int i,dem=0;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==c)
			dem++;
	}
	printf("%d",dem);
	return 0;
}


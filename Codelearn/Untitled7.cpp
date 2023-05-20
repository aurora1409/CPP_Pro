#include<stdio.h>
#include<string.h>

int main()
{
	char s1[100],s2[100];
	scanf("%s",s1);
	scanf("%s",s2);
	if(strcmp(s1,s2)==0) printf("yes");
	else printf("no");
	return 0;
}
// dung ham strcmp de kiem tra 2 xau co giong
// nhau khong, neu giong tra ve gia tri 0, sai 
// tra ve gia tri bat ki khac 0


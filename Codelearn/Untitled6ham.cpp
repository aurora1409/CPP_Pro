#include<stdio.h>
#include<string.h>

void show(char str[100])
{
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]>='A'&&str[i]<='Z') str[i]+=32;
	}
	printf("%s\n",str);
}
int main()
{
	char a[100],b[100],c[100];
	scanf("%s%s%s",a,b,c);
	show(a);
	show(b);
	show(c);
}


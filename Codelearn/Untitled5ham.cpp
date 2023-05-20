#include<stdio.h>

void show(char str[100])
{
	printf("Hello %s",str);
}
int main()
{
	char str[100];
	scanf("%s",str);
	show(str);
	return 0;
}


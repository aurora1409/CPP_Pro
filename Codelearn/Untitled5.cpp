#include<stdio.h>
#include<string.h>
 
int main(){
    char s[100];
    char c;
    scanf("%c",&c);
    scanf("%s",s);
    int x=-1;
    for(int i=0;i<strlen(s);i++)
    {
    	if(s[i]==c) 
    	{
    		x=i;
    		break;
		}
	}
	printf("%d",x);
}


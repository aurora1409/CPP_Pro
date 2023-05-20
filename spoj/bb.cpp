#include<stdio.h>

//using namespace std;

int main()
{
	int n;
	int a[1000]={},ts[1000]={};
	int count=0;
	while(scanf("%d",&n))
	{
		if(n==0) break;
		for(int i=0;i<6*n;i++)
		{
			scanf("%d",&a[i]);
			ts[a[i]++];
		}
		for(int i=0;i<1000;i++)
		{
			if(ts[i]>=1) count++;
		}
		printf("%d\n",count);
	//	if(count>=49) cout<<"Yes";
	//	else cout<<"No";
	}
	return 0;
}


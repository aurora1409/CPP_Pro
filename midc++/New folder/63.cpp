#include<bits/stdc++.h>

using namespace std;

/*
dang tam giac cua bia
1+2+3 +........= (i*(i+1))/2=x;
dang vuong kiem tra so chinh phuong
*/
int main()
{
	long long x[12]={4, 16, 121, 529, 4096, 17956, 139129, 609961, 4726276, 20720704, 160554241, 703893961};
	int j=0;
//	cin>>t;
	long long a,b;
	while(1)
	{
		cin>>a>>b;
		if(a==0&&b==0) break;
		int count=0;
		for(int i=0;i<12;i++)
			if(x[i]>a&&x[i]<b) count++;
		j++;
		cout<<"Case "<<j<<": "<<count<<endl;
	}
	return 0;
}


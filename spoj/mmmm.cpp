#include <iostream>
using namespace std;
 
int main ()
{
    //IN;
    int ms[9];  //Music sheet =))
    for (int i=0; i<8; i++)
    {
        cin>>ms[i];
    }
    //OUT;
    int isUp=0;
    int isDown=0;
    for (int i=0; i<7; i++)
    {
        if (ms[i]>ms[i+1])  isUp=1;
        if (ms[i]<ms[i+1])  isDown=1;
    }
    if (isUp==0 && isDown==1) cout<<"ascending";
    else if (isUp==1 && isDown==0) cout<<"descending";
    else cout<<"mixed";
   
    return 0;
}

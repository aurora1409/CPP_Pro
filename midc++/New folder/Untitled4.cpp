#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
struct number{
    int num;
    int freq;
    number(){
        freq = 0;
    
    //int sum(){
    //	return sum*freq;
    //}
    
    }
};
 
bool compare(number x1, number x2){
    if(x1.freq == x2.freq) return x1.num < x2.num;
    return x1.freq > x2.freq;
}
 
int main()
{
    int n;
    cin >> n;
    vector<number> list;
    int tmp;
    for (int i = 0; i < n;i++)
    {
        int flag = 0;
        cin >> tmp;
        for (int j = 0; j < list.size();j++)
        {
            if (tmp==list[j].num)
            {    
                list[j].freq++;
                flag = 1;
            }
        }
        if (!flag)
        {
            number tmp2;
            tmp2.num = tmp;
            tmp2.freq = 1;
            list.push_back(tmp2);
        }
    }
    // for(int i = 0; i<list.size(); i++){
    //     cout << list[i].num << " " << list[i].freq << endl;
    // }
    sort(list.begin(), list.end(), compare);
    for (int i = 0; i < list.size();i++)
    {
//        for (int j = 0; j < list[i].freq;j++)
//            cout << list[i].num << " ";
		//cout<<list[i].sum()<<" ";
    }
}

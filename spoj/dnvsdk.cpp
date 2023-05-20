#include <iostream>
using namespace std;
 
long long sum[500010];
 
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int n1;
        cin >> n1;
        sum[i] = sum[i - 1] + n1;
    }
    long long tong = 0;
    if (sum[n] % 3 == 0)
    {
        int dem = 0;
        for (int i = n - 1; i>0; i--)
        {
            if (sum[i] == sum[n] / 3)
            {
                tong = tong + dem;
            }
            if (sum[i] == sum[n] / 3 * 2)
            {
                dem++;
            }
        }
    }
    cout << tong << endl;
}

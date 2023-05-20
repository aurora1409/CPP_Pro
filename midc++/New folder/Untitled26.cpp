#include <bits/stdc++.h>
#include <vector>
#include <string>
 
using namespace std;
 
 
int main() {
    string s;
    getline(cin, s);
    vector<string> a(100);
    int k = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            a[k].push_back(s[i]);
        }
        else {
            if (s[i - 1] != ' ') {
                k++;
            }
        }
    }
    k = s[s.size() - 1] == ' ' ? k : k + 1;
    for (int i = k - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
}

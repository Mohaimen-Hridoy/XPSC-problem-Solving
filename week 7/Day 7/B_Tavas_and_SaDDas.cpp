#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int len = s.length();
    int idx = (1 << len) - 2; 

    for (int i = 0; i < len; i++) {
        if (s[i] == '7') {
            idx += (1 << (len - i - 1)); 
        }
    }

    cout << idx + 1 << endl; 
    return 0;
}

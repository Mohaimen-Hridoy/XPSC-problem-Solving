#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int m = 0;
        string r = "";

        for (char c : s) {
            if (!r.empty() && r.back() != c) {
                r.pop_back(); 
                ++m;
            } else {
                r.push_back(c); 
            }
        }

        if (m % 2 == 1) {
            cout << "Zlatan" << endl;
        } else {
            cout << "Ramos" << endl;
        }
    }

    return 0;
}

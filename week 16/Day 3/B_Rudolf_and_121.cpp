#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) cin >> a[i];

        bool possible = true;

        for (int i = 0; i < n - 2; i++) {
            if (a[i] < 0) {
                possible = false;
                break;
            }
            int d = a[i];  
            a[i] -= d;
            a[i + 1] -= 2 * d;
            a[i + 2] -= d;
        }

        if (a[n - 1] != 0 || a[n - 2] != 0) possible = false;

        if (possible) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
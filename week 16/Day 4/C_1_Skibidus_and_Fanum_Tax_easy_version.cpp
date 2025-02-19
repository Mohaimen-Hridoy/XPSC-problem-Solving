#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int x;
        cin >> x;
        int b[n];

        for (int i = 0; i < n; i++) {
            b[i] = x - a[i];
        }

        int ans[n], p = 0, ok = 1;

        for (int i = 0; i < n; i++) {
            if (i == 0) {
                ans[p++] = min(a[i], b[i]);
            } else {
                int mn = min(a[i], b[i]), mx = max(a[i], b[i]);
                if (mn >= ans[p - 1]) {
                    ans[p++] = mn;
                } else if (mx >= ans[p - 1]) {
                    ans[p++] = mx;
                } else {
                    ok = 0;
                    break;
                }
            }
        }

        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

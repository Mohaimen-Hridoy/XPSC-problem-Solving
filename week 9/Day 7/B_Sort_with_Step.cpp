#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k, c = 0;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++) cin >> a[i];

        if (is_sorted(a.begin(), a.end())) {
            cout << 0 << '\n';
            continue;
        }

        for (int i = 0; i < n; i++) {
            if (abs(a[i] - (i + 1)) % k != 0) c++;
        }

        if (c > 2) cout << -1 << '\n';
        else if (c == 2) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
    return 0;
}

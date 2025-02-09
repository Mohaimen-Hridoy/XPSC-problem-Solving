#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, x;
        cin >> n >> x;
        vector<int> val(n + 1);
        val[0] = 0;
        for (int i = 0; i < n; i++) {
            cin >> val[i + 1];
        }
        val.push_back(x);
        sort(val.begin(), val.end());

        int ans = 0;
        for (int i = 1; i < n + 2; i++) {
            int tmp = val[i] - val[i - 1];
            if (val[i] == x) tmp *= 2;
            ans = max(tmp, ans);
        }

        cout << ans << endl;
    }

    return 0;
}

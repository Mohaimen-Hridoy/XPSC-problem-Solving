#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n, k;
    cin >> n >> k;
    vector<long long int> a(n);
    for (long long int i = 0; i < n; i++) {
        cin >> a[i];
    }

    auto ok = [&](long long int median) {
        long long cnt = 0;
        for (long long int i = (n / 2); i < n; i++) {
            cnt += (a[i] < median ? (median - a[i]) : 0);
        }
        return cnt <= k;
    };

    sort(a.begin(), a.end());

    long long int l = 1, r = 2e9, mid, ans;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (ok(mid)) {
            l = mid + 1;
            ans = mid;
        } else {
            r = mid-1;
        }
    }

    cout << ans << "\n";
    return 0;
}
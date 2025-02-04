#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int ans = 0;
    for(int sum = 2; sum <= 200000; sum++) {
        int cnt = 0;
        int l = 0, r = n - 1;
        while (l < r) {
            if (a[l] + a[r] == sum) {
                cnt++;
                l++;
                r--;
            } else if (a[l] + a[r] < sum) {
                l++;
            } else {
                r--;
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans << '\n';
}

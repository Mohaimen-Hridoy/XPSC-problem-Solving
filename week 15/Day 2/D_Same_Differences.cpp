#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t, n;
    cin >> t;
    while (t--) 
    {
        cin >> n;
        unordered_map<long long, long long> f;
        long long x, ans = 0;
        for (long long i = 0; i < n; i++) 
        {
            cin >> x;
            f[x - i]++;
        }
        for (auto p : f) ans += (p.second * (p.second - 1)) / 2;
        cout << ans << '\n';
    }
    return 0;
}

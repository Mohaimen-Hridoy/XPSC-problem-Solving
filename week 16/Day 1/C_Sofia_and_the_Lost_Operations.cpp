#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long int n;
        cin >> n;
        vector<long long int> a(n), b(n);

        for (long long int i = 0; i < n; i++) cin >> a[i];
        for (long long int i = 0; i < n; i++) cin >> b[i];

        map<long long int, long long int> mp;
        for (long long int i = 0; i < n; i++) {
            if (a[i] != b[i]) mp[b[i]]++;
        }

        long long int m;
        cin >> m;
        vector<long long int> d(m);

        map<long long int, long long int> nw;
        for (long long int i = 0; i < m; i++) {
            cin >> d[i];
            nw[d[i]]++;
        }

        if (count(b.begin(), b.end(), d[m - 1]) == 0) {
            cout << "NO\n";
            continue;
        }

        bool f = false;
        for (auto p : mp) {
            if (p.second > nw[p.first]) {
                f = true;
                break;
            }
        }

        if (f) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    
    return 0;
}

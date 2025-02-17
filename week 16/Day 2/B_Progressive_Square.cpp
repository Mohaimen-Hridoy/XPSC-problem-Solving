#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, c, d;
        cin >> n >> c >> d;
        vector<long long int> val(n * n);
        for (long long int i = 0; i < n * n; i++) {
            cin >> val[i];
        }
        sort(val.begin(), val.end());
        long long int start = val[0];
        vector<long long int> mat;
        long long int st = start; 
        for (long long int i = 0; i < n; i++) {
            long long int tmp = st;
            for (long long int j = 0; j < n; j++) {
                mat.push_back(tmp);
                tmp += d;
            }
            st += c;
        }
        sort(mat.begin(), mat.end());
        if (val == mat) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}

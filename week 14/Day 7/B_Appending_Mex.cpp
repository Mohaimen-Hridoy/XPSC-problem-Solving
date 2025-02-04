#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    long long n; cin >> n;
    vector<long long> v(n);
    for(long long i = 0; i < n; i++) cin >> v[i];

    multiset<long long> ml;
    for(long long i = 0; i < n; i++) {
        if(v[i] == 0) ml.insert(0);
        else {
            if(!ml.empty() && ml.find(v[i] - 1) != ml.end()) ml.insert(v[i]);
            else {
                cout << i + 1 << '\n';
                return 0;
            }
        }
    }
    
    cout << -1 << '\n';
    return 0;
}

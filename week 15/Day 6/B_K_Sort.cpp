#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    
    while (T--) {
        long long int n;
        cin >> n;
        vector<long long int> val(n);
        for (long long int i = 0; i < n; i++) cin >> val[i];

        vector<long long int> st;
        st.push_back(val[0]);
        for (long long int i = 1; i < n; i++) st.push_back(max(val[i], st[i - 1]));

        priority_queue<long long int> pq;
        for (long long int i = 0; i < n; i++) {
            long long int d = st[i] - val[i];
            if (d) pq.push(-d);
        }

        long long int ans = 0, prev = 0;
        while (pq.size()) {
            ans += (-1LL * (pq.top() - prev)) * (pq.size() + 1);
            prev = pq.top();
            pq.pop();
        }
        cout << ans << '\n';
    }
    
    return 0;
}

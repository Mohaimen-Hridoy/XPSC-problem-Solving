#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;

        int lb = lower_bound(a.begin(), a.end(), l)-a.begin();
        int ub = upper_bound(a.begin(), a.end(), r)-a.begin();

        cout << ub - lb<<" ";
    }

    return 0;
}

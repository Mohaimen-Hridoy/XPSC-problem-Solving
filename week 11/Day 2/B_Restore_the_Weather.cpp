#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin >> t;
    while (t--) 
    {
        long long int n, k;
        cin >> n >> k;

        vector<pair<int, int>> a(n); 
        vector<int> b(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i].first;
            a[i].second = i;
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        sort(a.begin(), a.end()); 
        sort(b.begin(), b.end()); 

        vector<int> result(n);
        for (int i = 0; i < n; ++i) {
            result[a[i].second] = b[i]; 
        }

        for (int i = 0; i < n; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

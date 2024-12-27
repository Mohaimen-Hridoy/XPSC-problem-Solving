#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
        }

        long long total_sum = 0;
        for (int i = 0; i < n;i++) 
        {
            total_sum += a[i];
        }

        long long current_sum = 0;
        long long max_gcd = 1;

        for (int i = 0; i < n - 1; ++i) 
        {
            current_sum += a[i];
            long long remaining_sum = total_sum - current_sum;

            max_gcd = max(max_gcd, __gcd(current_sum, remaining_sum));
        }

        cout << max_gcd << "\n";
    }

    return 0;
}

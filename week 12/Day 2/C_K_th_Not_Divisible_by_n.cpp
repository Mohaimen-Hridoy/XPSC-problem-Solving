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
        long long n, k;
        cin >> n >> k;

        long long left = 1, right = 1e18, result = 1;
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            if (mid - mid / n >= k) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        cout << result << "\n";
    }

    return 0;
}

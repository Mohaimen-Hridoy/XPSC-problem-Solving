#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, k;
    cin >> n >> k;

    long long int low = 0, high = n, x = 0;
    while (low <= high) {
        long long int mid = (low + high) / 2;
        long long int total_candies_added = mid * (mid + 1) / 2;

        if (total_candies_added <= n + k) {
            x = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    long long int y = n - x;
    cout << y << endl;

    return 0;
}
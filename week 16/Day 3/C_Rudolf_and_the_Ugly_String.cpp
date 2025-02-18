#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin >> t;

    while (t--) {
        long long int n;
        cin >> n;
        string s;
        cin >> s;

        long long int count = 0;

        for (long long int i = 0; i < n - 2; i++) {
            if ((s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') ||
                (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')) {
                count++;
                s[i + 2] = '#';
            }
        }

        cout << count << '\n';
    }

    return 0;
}

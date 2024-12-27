#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;

        if (l <= 3 && r <= 3) {
            cout << -1 << endl;
            continue;
        }

        if (r - l >= 1) {
            if (r % 2 != 0) {
                r--;
            }
            cout << r / 2 << " " << r / 2 << endl;
            continue;
        }

        int d = l;
        for (int i = 2; i * i <= l; ++i) {
            if (l % i == 0) {
                d = i;
                break;
            }
        }

        if (d == l) {
            cout << -1 << endl;
        } else {
            cout << d << " " << l - d << endl;
        }
    }

    return 0;
}

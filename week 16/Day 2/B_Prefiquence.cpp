#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        
        int i = 0, j = 0, k = 0;
        while (i < n && j < m) {
            if (a[i] == b[j]) {
                k++;
                i++;
            }
            j++;
        }
        cout << k << "\n";
    }
    return 0;
}

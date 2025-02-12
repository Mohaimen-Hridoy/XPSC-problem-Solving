#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        int currentB = 0;
        for (char c : s) {
            if (c == 'B') currentB++;
        }
        
        if (currentB == k) {
            cout << "0\n";
            continue;
        }
        
        vector<pair<int, char>> operations;
        
        if (currentB < k) {
            int needed = k - currentB;
            int count = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] == 'A') {
                    count++;
                    if (count == needed) {
                        operations.push_back({i + 1, 'B'});
                        break;
                    }
                }
            }
        } else {
            int excess = currentB - k;
            int count = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] == 'B') {
                    count++;
                    if (count == excess) {
                        operations.push_back({i + 1, 'A'});
                        break;
                    }
                }
            }
        }
        
        cout << operations.size() << "\n";
        for (auto &[idx, ch] : operations) {
            cout << idx << " " << ch << "\n";
        }
    }
    
    return 0;
}

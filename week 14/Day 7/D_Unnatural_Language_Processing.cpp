#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), 
    cin.tie(0), cout.tie(0);
    long long T;
    cin >> T;
    
    while(T--) {
        long long n; cin >> n;
        string s; cin >> s;
        reverse(s.begin(), s.end());
        string ans = "";
        for (long long i = 0; i < n; i++) {
            if(s[i] == 'a' || s[i] == 'e') {
                ans += s[i];
                ans += s[i+1];
                ans += ".";
                i++;
            } else {
                ans += s[i];
                ans += s[i+1];
                ans += s[i+2];
                ans += ".";
                i += 2;
            }
        }
        reverse(ans.begin(), ans.end());
        for(long long i = 1; i < ans.size(); i++) cout << ans[i];
        cout << '\n';
    }
    
    return 0;
}

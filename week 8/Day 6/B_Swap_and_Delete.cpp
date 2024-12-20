#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;

        int n = s.size(), ones = count(s.begin(), s.end(), '1');
        int zeros = n - ones;
        int i;

        for (i = 0; i < n; i++) 
        {
            if (s[i] == '0') 
            {
                if (ones > 0)
                {
                  ones--;
                } 
                else 
                {
                    break;
                }
            }
             else 
            {
                if (zeros > 0) 
                {
                    zeros--;
                }
                else 
                {
                    break;
                }
            }
        }

        cout << n - i << '\n';
    }
}

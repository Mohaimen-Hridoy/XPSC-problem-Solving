#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ss = 0, pp = 0;
        int si = 0, pi = -1;
        int idx = 0;

        for (auto &i : s) 
        {
            if (i == 's') 
            {
                ss++;
                si = idx;
            }
            if (i == 'p') 
            {
                pp++;
                if (pi == -1) 
                {
                    pi = idx;
                }
            }
            idx++;
        }

        if (ss == 0 || pp == 0) 
        {
            cout << "YES" << endl;
            continue;
        }

        if (si == 0 || pi == n - 1) 
        {
            cout << "YES" << endl;
            continue;
        }

        cout << "NO" << endl;
    }

    return 0;
}

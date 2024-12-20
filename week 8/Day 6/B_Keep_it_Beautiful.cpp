#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int q;
        cin >> q;
        vector<int> a;
        string res = "";
        bool phase = true;

        while (q--) 
        {
            int x;
            cin >> x;
            if (phase) 
            {
                if (a.empty() || x >= a.back()) 
                {
                    a.push_back(x);
                    res += '1';
                } 
                else 
                {
                    if (x <= a.front()) 
                    {
                        a.push_back(x);
                        res += '1';
                        phase = false;
                    } else 
                    {
                        res += '0';
                    }
                }
            } 
            else 
            {
                if (x >= a.back() && x <= a.front()) 
                {
                    a.push_back(x);
                    res += '1';
                } 
                else 
                {
                    res += '0';
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
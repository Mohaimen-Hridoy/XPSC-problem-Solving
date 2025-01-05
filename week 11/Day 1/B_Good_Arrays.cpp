#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin >> t;
    while (t--) 
    {
        long long int n;
        cin >> n;
        vector<long long int> a(n);
        for (long long int& x : a) 
        {
            cin >> x;
        }
        if (n == 1) 
        {
            cout << "NO\n";
            continue;
        }
        long long int one = 0, s = 0;
        for (int x : a) 
        {
            if (x > 1) 
            {
                s += (x - 1);
            } 
            else 
            {
                one++;
            }
        }
        if (one == 0 || s >= one) 
        {
            cout << "YES\n";
        } else 
        {
            cout << "NO\n";
        }
    }
    return 0;
}

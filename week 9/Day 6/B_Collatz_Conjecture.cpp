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
        long long int x, y, k;
        cin >> x >> y >> k;
        while (k && x != 1) 
        {
            long long int d = (x / y + 1) * y - x;
            if (!d) 
            {
                d = 1;
            }
            if (d > k) 
            {
                d = k;
            }
            x += d;
            while (x % y == 0) 
            {
                x /= y;
            }
            k -= d;
        }
        cout << x + k % (y - 1) << endl;
    }
    return 0;
}

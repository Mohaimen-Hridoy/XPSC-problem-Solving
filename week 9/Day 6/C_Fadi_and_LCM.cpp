#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int x;
    cin >> x;
    long long int ans = 1;
    for(long long int i = 1; i * i <= x; i++)
    {
        if(x % i == 0 && (i / __gcd(i*1LL, x / i)) * (x / i) == x)
            ans = i;
    }
    cout << ans << " " << x / ans << endl;
}

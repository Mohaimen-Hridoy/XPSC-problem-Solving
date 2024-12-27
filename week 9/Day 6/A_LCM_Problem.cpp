#include <iostream>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) 
    {
        long long int l, r;
        cin >> l >> r;

        if (2 * l <= r) 
        {
            cout << l << " " << 2 * l << "\n";
        } 
        else 
        {
            cout << -1 << " " << -1 << "\n";
        }
    }

    return 0;
}

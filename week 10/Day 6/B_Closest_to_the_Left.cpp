#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    
    vector<int> arr(n);
    for (int i = 0;i<n;i++) 
    {
        cin >> arr[i];
    }

    while (k--) 
    {
        int q;
        cin >> q;

        int l = 0, r = n-1;
        while (l <=r) 
        {
            int m = (l + r) / 2;
            if (arr[m] <= q) 
            {
                l = m + 1;
            } 
            else 
            {
                r = m-1;
            }
        }

        if (l > 0) 
        {
            cout << l << "\n";
        } else {
            cout << 0 << "\n";
        }
    }

    return 0;
}

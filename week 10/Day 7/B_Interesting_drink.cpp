#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n;
    cin >> n;

    long long int arr[n];

    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    long long int q;
    cin >> q;
    while (q--)
    {
        long long int x;
        cin >> x;
        long long int l = 0, r = n - 1, ans = 0;

        while (l <= r)
        {
            long long int mid = (l + r) / 2;
            if (x >= arr[mid])
            {
                l = mid + 1;
                ans = mid + 1; 
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << ans << endl; 
    }

    return 0;
}

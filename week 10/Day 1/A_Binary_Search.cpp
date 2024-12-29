#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    vector<int> queries(k);
    for (int i = 0; i < k; ++i)
        cin >> queries[i];

    for (int i = 0; i < k; ++i) 
    {
        int x = queries[i];
        int left = 0, right = n - 1;
        bool found = false;

        while (left <= right) 
        {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] == x) 
            {
                found = true;
                break;
            } 
            else if (arr[mid] < x) 
            {
                left = mid + 1;
            } 
            else 
            {
                right = mid - 1;
            }
        }

        if (found) 
        {
            cout << "YES\n";
        }
        else 
        {
            cout << "NO\n";
        }
    }

    return 0;
}

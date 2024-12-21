#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) 
    {
        long long n, k;
        cin >> n >> k;

        long long totSum = n * (n + 1) / 2;
        long long currSum = 0;

        vector<long long> nums(n + 1);

        for (int i = 0; i < n; i++) 
        {
            cin >> nums[i];
            currSum += nums[i];
        }

        nums[n] = totSum - currSum;
        k = k % (n + 1);

        for (int i = 0; i < n; i++) 
        {
            cout << nums[(i - k + n + 1) % (n + 1)] << " ";
        }
        cout << "\n";
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long int n, q;
        cin >> n >> q;

        long long int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        long long int b[q];
        for (int i = 0; i < q; i++) 
            cin >> b[i];

        set<long long int> h;
        for (int i = 0; i < q; i++) 
        {
            if (h.count(b[i])) 
                continue;
            h.insert(b[i]);
            for (int j = 0; j < n; j++) 
            {
                if (a[j] % (1LL << b[i]) == 0) 
                    a[j] += (1LL << (b[i] - 1));
            }
        }

        for (int i = 0; i < n; i++) 
            cout << a[i] << " ";
        cout << "\n";
    }

    return 0;
}

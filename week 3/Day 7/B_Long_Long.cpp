#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        vector<long long>a(n);
        long long s=0;
        int m = 0;
        bool f = false;

        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            s += abs(a[i]);

            if (a[i] < 0) {
                if (!f) {
                    
                    f = true;
                    m++;
                }
            } else if (a[i] > 0) {
                f = false;
            }
        }

        cout << s << " " << m << "\n";
    }

    return 0;
}

#include <bits/stdc++.h>
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
        vector<long long int> v(n);

        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        bool flag = true;

        for (long long int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                flag = false;
                break;
            }
        }

        long long int k = -1;

        if (flag == true)
        {
            cout << "Yes" << endl;
        }
        else
        {
            bool flag1 = true;

            for (long long int i = 1; i < n; i++)
            {
                if (v[i - 1] > v[i])
                {
                    k = i;
                    break;
                }
            }

            for (long long int i = k; i < n - 1; i++)
            {
                if (v[i] > v[i + 1])
                {
                    flag1 = false;
                    break;
                }
            }

            if (flag1 == true)
            {
                if (v[n - 1] > v[0])
                {
                    flag1 = false;
                }
            }

            if (flag1 == true)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        set<int> dig;
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            freq[tmp % 10]++;
            dig.insert(tmp % 10);
        }

        vector<int> digits;
        for (auto it = dig.begin(); it != dig.end(); it++)
        {
            int end = (freq[*it] > 3) ? 3 : freq[*it];
            for (int i = 0; i < end; i++)
                digits.push_back(*it);
        }

        string ans = "NO";
        for (int i = 0; i < digits.size(); i++)
        {
            for (int j = i + 1; j < digits.size(); j++)
            {
                for (int k = j + 1; k < digits.size(); k++)
                {
                    if (i != j && j != i && k != i)
                    {
                        if ((digits[i] + digits[j] + digits[k]) % 10 == 3)
                        {
                            ans = "YES";
                            break;
                        }
                    }
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}

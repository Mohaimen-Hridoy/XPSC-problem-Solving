#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<string> q;
    unordered_set<string> s;

    while (n--) 
    {
        string p;
        cin >> p;

        if (s.find(p) != s.end()) 
        {
            for (auto it = q.begin(); it != q.end(); it++)
            {
                if (*it == p) 
                {
                    q.erase(it);
                    break;
                }
            }
        } 
        else 
        {
            s.insert(p);
        }

        q.push_front(p);
    }
    for (const string &pr : q) 
    {
        cout << pr.substr(pr.size() - 2);
    }

    return 0;
}

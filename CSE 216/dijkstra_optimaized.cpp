#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 7;
vector<pair<int, int>> v[N];
int dist[N];

void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, src});
    dist[src] = 0;

    while (!q.empty())
    {
        int cost = q.top().first;
        int node = q.top().second;
        q.pop();

        if (cost > dist[node]) continue;

        for (auto child : v[node])
        {
            int childNode = child.first;
            int childCost = child.second;

            if (cost + childCost < dist[childNode])
            {
                dist[childNode] = cost + childCost;
                q.push({dist[childNode], childNode});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
    }

    dijkstra(0);

    for (int i = 0; i < n; i++)
    {
        if (dist[i] == INT_MAX)
        {
            cout << "Node " << i << " is unreachable from 0" << endl;
        }
        else
        {
            cout << "Distance from 0 to " << i << " is " << dist[i] << endl;
        }
    }
}

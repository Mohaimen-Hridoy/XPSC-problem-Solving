#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m,n;
    cin>>m>>n;
    vector<long long int >v;
    for(int i=0;i<m+n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    for(int i=0;i<m+n;i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}

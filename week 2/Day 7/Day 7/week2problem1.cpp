#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int a,b;
    cin>>a>>b;
    vector<long long int>v;
    for(long long int i=0;i<a;i++)
    {
        long long int x;
        cin>>x;
        if(x==b)
        {
            continue;
        }
        v.push_back(x);
    }

    for(long long int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
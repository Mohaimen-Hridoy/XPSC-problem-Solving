#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    map<int,int>mp;

    for (int i=0;i<n;i++) 
    {
        int a;
        cin>>a;
        mp[a]++;
    }

    int max1=0;
    for (auto b:mp) 
    {
        max1=max(max1,b.second);
    }

    cout<<max1<<"\n";

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;

    vector<int>a(n);
    for (int i=0;i<n;i++) 
    {
        cin>>a[i];
    }

    unordered_map<int,int>f;
    int l=0;
    long long res=0;
    int u=0;

    for(int r=0;r<n;r++) 
    {
        if(f[a[r]]==0) 
        {
            u++;
        }
        f[a[r]]++;

        while(u>k) 
        {
            f[a[l]]--;
            if(f[a[l]]==0) 
            {
                u--;
            }
            l++;
        }

        res+=(r-l+1);
    }

    cout<<res<< endl;

    return 0;
}

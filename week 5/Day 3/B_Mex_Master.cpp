#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,i,zero,non_zero,ans,mx;
    cin>>t;
    while(t--) 
    {
        cin>>n;
        zero=0;
        non_zero=0;
        vector<int>v(n);
        for (i=0;i<n;i++) 
        {
            cin>>v[i];
            if(v[i]==0) 
            {
                zero++;
            }
            else 
            {
                non_zero++;
            }
        }
        if(zero==0) 
        {
            ans=0;
        }
        else 
        {
            if(non_zero>=zero-1) 
            {
                ans = 0;
            }
            else 
            {
                mx = *max_element(v.begin(), v.end());
                if (mx == 1) ans = 2;
                else ans = 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

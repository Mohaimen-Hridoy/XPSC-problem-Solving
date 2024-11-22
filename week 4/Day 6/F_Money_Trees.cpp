#include<bits/stdc++.h>
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
        long long k;
        cin>>n>>k;

        vector<long long> a(n),h(n);
        for (int i=0;i<n;i++)
        {
        cin >> a[i];
        }
        for(int i=0;i<n;i++) 
        {
        cin>>h[i];
        }

        long long max_len=0,sum=0;
        long long int l=0;

        for(int r=0;r<n;r++) 
        {
            sum+=a[r];

            while(l<r && (sum>k || (r>l && h[r-1]%h[r]!=0))) 
            {
                sum-=a[l];
                l++;
            }

            if(sum<=k) 
            {
                max_len=max(max_len,r-l+1);
            }
        }

        cout<<max_len<<"\n";
    }

    return 0;
}

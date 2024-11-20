#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int  n,k;
    cin>>n>>k;
    vector<long long int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int l=0,r=0;
    long long int ans=0,sum=0;


    while(r<n)
    {
        sum=sum+v[r];
        if(sum<=k)
        {
            ans=(r-l+1)+ans;
        }
        else
        {
            while(sum>k && l<=r)
            {
                sum=sum-v[l];
                l++;
            }
            if(sum<=k)
            {
                ans=(r-l+1)+ans;
            }
        }
        r++;
    }

    cout<<ans<<endl;
    return 0;
}
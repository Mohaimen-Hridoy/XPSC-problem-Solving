#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n,k;
    cin>>n>>k;
    vector<long long int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    long long int l=0,r=0,ans=n+1;
    long long int sum=0;

    while(r<n)
    {
        sum=sum+v[r];
        while(sum>=k) 
        {
            ans=min(ans,r-l+1);
            sum=sum-v[l];
            l++;
        }
        r++;
    }

    if (ans==n+1) 
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }
    
    return 0;
}
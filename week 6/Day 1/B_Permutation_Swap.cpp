#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int arr[n];

        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        long long int ans=0;

        for(long long int i=0;i<n;i++)
        {
            ans=__gcd(ans,abs(arr[i]-i-1));
        }

        cout<<ans<<endl;
    }
    return 0;
}
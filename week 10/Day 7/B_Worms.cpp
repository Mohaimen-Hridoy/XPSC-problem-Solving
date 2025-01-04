#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n;
    cin>>n;

    long long int arr[n];

    for(long long int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    long long int pre[n];

    pre[0]=arr[0];

    for(long long int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+arr[i];
    }

    long long int q;
    cin>>q;

    while(q--)
    {
        long long int x;
        cin>>x;

        long long int l=0,r=n-1,ans=-1;

        while(l<=r)
        {
            long long int mid=(l+r)/2;

            if(pre[mid]>=x)
            {
                ans=mid+1;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }

        cout<<ans<<endl;
    }
    
    return 0;
}
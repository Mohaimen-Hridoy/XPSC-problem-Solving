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
        long long int ans=0;
        long long int arr[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
            ans^=arr[i];
        }

        if(n%2==0)
        {
            if(ans==0)
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}
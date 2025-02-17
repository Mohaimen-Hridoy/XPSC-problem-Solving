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
        long long int n,m,k;
        cin>>n>>m>>k;
        long long int arr[n];
        long long int brr[m];

        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(long long int i=0;i<m;i++)
        {
            cin>>brr[i];
        }

        long long int count=0;

        for(long long int i=0;i<n;i++)
        {
            for(long long int j=0;j<m;j++)
            {
                if(arr[i]+brr[j]<=k)
                {
                    count++;
                }
            }
        }

        cout<<count<<endl;
    }
    return 0;
}
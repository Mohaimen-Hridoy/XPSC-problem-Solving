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

        vector<long long int>v(n);

        for(long long int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        long long int Max=INT_MIN;
        long long int sum=0,count=0;

        for(long long int i=0;i<n;i++)
        {
            sum=sum+v[i];

            Max=max(Max,v[i]);

            if(sum-Max==Max)
            {
                count++;
            }
        }

        cout<<count<<endl;
    }
    return 0;
}
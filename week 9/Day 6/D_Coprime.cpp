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

        long long int sum=0,Max=0;

        for(long long int i=n-1;i>=0;i--)
        {
            for(long long int j=i;j>=0;j--)
            {
                if((__gcd(v[i],v[j]))==1)
                {
                    sum=i+j;
                    Max=max(Max,sum);
                }
            }
        }

        if(Max==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<Max+2<<endl;
        }
    }
    return 0;
}
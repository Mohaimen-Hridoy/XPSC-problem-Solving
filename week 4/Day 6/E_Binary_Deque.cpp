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
        long long int n,s,sum=0;
        cin>>n>>s;
        long long int count=0;
        deque<long long int>dq;

        for (long long int i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
            dq.push_back(x);
            sum+=x;
        }

        if (sum<s)
        {
            cout<<"-1"<<endl;
        }
        else if(sum==s)
        {
            cout<<"0"<<endl;
        }
        else
        {
            sum = 0; 
            long long int length=0;
            for (long long int i=0,j=0;i<n;i++)
            {
                sum+=dq[i];
                while(sum>s)
                {
                    sum-=dq[j];
                    j++;
                }
                if(sum==s)
                {
                    length=max(length,i-j+1);
                }
            }
            cout<<n-length<<endl;
        }
    }
    return 0;
}

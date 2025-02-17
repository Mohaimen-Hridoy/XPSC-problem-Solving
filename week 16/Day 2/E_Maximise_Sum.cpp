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
        long long int count=0;
        long long int arr[n];
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<0)
            {
                count++;
            }
        }

        if(count%2==0)
        {
            for(int i=0;i<n;i++)
            {
                if(arr[i]<0)
                {
                    arr[i]=arr[i]*-1;
                }
                sum=sum+arr[i];
            }
        }
        else
        {
            vector<int>v;
            for(int i=0;i<n;i++)
            {
                if(arr[i]<0)
                {
                    v.push_back(arr[i]);
                }
            }

            sort(v.begin(),v.end());

            for(int i=0;i<v.size()-1;i++)
            {
                v[i]=v[i]*-1;
                sum=sum+v[i];
            }

            for(int i=0;i<n;i++)
            {
                if(arr[i]>0)
                {
                    sum=sum+arr[i];
                }
            }

        sum=sum+v.back();
        }
        cout<<sum<<endl;
    }
    return 0;
}

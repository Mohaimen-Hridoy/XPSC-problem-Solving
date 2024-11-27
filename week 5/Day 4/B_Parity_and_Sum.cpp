#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin>>t;

    while(t--) 
    {
        long long n,result=0,maxOdd=0,evenCount=0;
        cin >> n;
        vector<long long>arr;

        for (long long i=0;i<n;i++) 
        {
            long long x;
            cin>>x;
            arr.push_back(x);
            if(x%2==1) 
            {
                maxOdd=max(maxOdd,x);
            } 
            else 
            {
                evenCount++;
            }
        }

        if(maxOdd==0 || evenCount==0) 
        {
            cout<<0<<endl;
        } 
        else 
        {
            sort(arr.begin(),arr.end());

            for (long long i=0;i<n;i++) 
            {
                long long x=arr[i];
                if(x%2==0) 
                {
                    if(maxOdd<x) 
                    {
                        result++;
                        maxOdd+=arr[n-1];
                    }
                    result++;
                    maxOdd+=x;
                }
            }
            cout<<result <<endl;
        }
    }

    return 0;
}

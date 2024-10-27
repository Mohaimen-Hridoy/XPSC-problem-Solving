#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    long long int sum=0;
    for(long long int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);
    
    for(long long int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }

    if(sum%2!=0)
    {
    for(long long int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            sum=sum-arr[i];
            break;
        }
    }
    }
    
    cout<<sum<<endl;
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int arr[n];

        for(int i=0;i<n;i++)
        {
            arr[i]=i+1;
        }

        sort(arr,arr+k);
        sort(arr+k,arr+n,greater<int>());

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}
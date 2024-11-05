#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n,m;
    cin>>n>>m;
    long long int arr[n];
    long long int count[n];
    for(long long int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    
    set<int>s;
    for(int i=n;i>=1;i--)
    {
        s.insert(arr[i]);
        count[i]=s.size();
    }
    while(m--)
    {
        long long int k;
        cin>>k;

        cout<<count[k]<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n;
    cin>>n;

    map<long long int,long long int>d;

    for(long long int i=1;i<=n;i++)
    {
        long long int l,r;
        cin>>l>>r;
        d[l]++;
        d[r+1]--;
    }

    long long int sum=0;

    bool flag=true;

    for(auto h:d)
    {
        sum+=h.second;
        if(sum>2)
        {
            flag=false;
            break;
        }
    }

    if(flag==true)  
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
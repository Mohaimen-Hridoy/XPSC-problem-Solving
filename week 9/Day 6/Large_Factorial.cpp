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


        long long int fact=1;

        for(long long int i=1;i<=n;i++)
        {
            fact=(fact*i)%1000000007;
        }


        cout<<fact<<endl;
    }
    return 0;
}
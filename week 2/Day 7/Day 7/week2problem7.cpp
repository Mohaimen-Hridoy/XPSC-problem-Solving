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
        string s;
        cin>>s;
        map<char,int>mp;
        int count=0;

        for(char c:s)
        {
            mp[c]++;
        }

        for(auto &pr:mp)
        {
            if(pr.second%2!=0)
            {
                count++;
            }
        }

        if(k>=count-1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
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
        int m,n;
        cin>>m>>n;
        map<int,set<int>>mp;
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            mp[x].insert(i);
        }

        for(int i=0;i<n;i++)
        {
            int l,r;
            cin>>l>>r;
            if((mp.find(l)==mp.end()) || (mp.find(r)==mp.end()))
            {
                cout<<"NO"<<endl;
            }
            else
            {
                int start=*mp[l].begin();
                int end=*mp[r].rbegin();

                if(start<end)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}

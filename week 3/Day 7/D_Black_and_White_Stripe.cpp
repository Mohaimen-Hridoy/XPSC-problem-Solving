#include <bits/stdc++.h>
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

        int cw=0;
        for(int i=0;i<k;i++) 
        {
            if(s[i]=='W') 
            {
                cw++;
            }
        }

        int mn=cw;

        for (int i=k;i<n;i++) 
        {
            if(s[i]=='W') 
            {
                cw++;
            }
            if(s[i-k]=='W') 
            {
                cw--;
            }
            mn=min(mn,cw);
        }

        cout<<mn<<endl;;
    }

    return 0;
}

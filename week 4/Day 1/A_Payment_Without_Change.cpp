#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--) 
    {
        int a,b,n,S;
        cin>>a>>b>>n>>S;

        int coins=min(a,S/n);
       
        int res=S-coins*n;
        
        if (res<=b)
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

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
        int x,y;
        cin>>x>>y;

        int c=(y+1)/2; 
        int r=(y/2)*7+(y%2)*11;
        int s=max(0,x-r);

        c+=(s+14)/15;
        cout<<c<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,l,x,cnt,i;
    cin>>t;
    while(t--) 
    {
        cin>>n;
        cnt=n/2+n%2;
        l=1;
        x=3*n;
        cout<<cnt<<endl;

        for(i=0;i<cnt;i++) 
        {
            cout<<l<<" "<<x<<'\n';
            l+=3;
            x-=3;
        }
    }
    return 0;
}

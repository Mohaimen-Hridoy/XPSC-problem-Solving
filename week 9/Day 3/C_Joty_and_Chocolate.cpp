#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;

    long long int GCD=__gcd(a,b);

    long long int LCM=(a/GCD)*b;

    
    long long int ans=(n/a)*p+(n/b)*q-(n/LCM)*(p+q)+(n/LCM)*max(p,q);

    cout<<ans<<endl;
    
    return 0;
}
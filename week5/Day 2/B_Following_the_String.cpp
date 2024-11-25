#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t,n,i,j;
    cin>>t;
    while(t--) 
    {
        cin>>n;
        vector<long long int>a(n);

        for(i=0;i<n;i++) 
        {
            cin>>a[i];
        }

        vector<long long int>b(26,0);
        string r= "";
        for(i=0;i<n;i++)
        {
            for(j=0;j<26;j++)
            {
                if(b[j]==a[i]) 
                {
                    b[j]++;
                    r+=(char)('a'+j);
                    break;
                }
            }
        }
        cout<<r<<endl;
    }
    return 0;
}

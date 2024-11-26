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
        string s1;
        cin>>n>>s1;

        string s2=s1;
        reverse(s2.begin(),s2.end());

        bool flag=true;

        if(s1<=s2) 
        {
            cout<<s1<<endl;
        }
        else
        {
            cout<<s2+s1<<endl;
        }
    }
    return 0;
}

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
        string s,a;
        cin>>s>>a;

        if(s==a)
        {
            cout<<"YES"<<endl;
            continue;
        }

        int pos=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                pos=i;
                break;
            }
        }

        if(pos!=-1)
        {
            bool flag=true;
            for(int i=0;i<n;i++)
            {
                if(s[i]!=a[i])
                {
                    if(pos>i)
                    {
                    flag=false;
                    break;
                    }
                }
            }

            if(flag==true)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
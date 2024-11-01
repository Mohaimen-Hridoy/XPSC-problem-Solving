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
        int n;
        int count=0;
        cin>>n;
        string s;
        cin>>s;
        int a,b;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                count++;
            }
        }

        if(count==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]=='B')
                {
                    a=i;
                    break;
                }
            }

            for(int i=n-1;i>=0;i--)
            {
                if(s[i]=='B')
                {
                    b=i;
                    break;
                }
            }

            cout<<b-a+1<<endl;
        }
    }
    return 0;
}

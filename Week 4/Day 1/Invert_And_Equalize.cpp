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
        cin>>n;
        string s;
        cin>>s;
        bool flag=true;
        int count=0;

        for(int i=0;i<n-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                flag=false;
                break;
            }
        }

        if(s.size()==1 || flag==true)
        {
            cout<<"0"<<endl;
        }
        else
        {
        for(int i=0;i<n-1;i++)
        {
            if(s[i]!=s[i+1])
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
             cout<<(count+1)/2<<endl;
        }
        }
    }
    return 0;
}
 
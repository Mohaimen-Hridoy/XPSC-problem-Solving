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
        int n,k;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>k;
            string s;
            cin>>s;

            for(int j=0;j<s.size();j++)
            {
                if(s[j]=='D')
                {
                    arr[i]++;
                }
                else if(s[j]=='U')
                {
                    arr[i]--;
                }
            }
            if(arr[i]>=0)
            {
                v.push_back(arr[i]%10);
            }
            else
            {
                v.push_back(arr[i]+10);
            }
        }

        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}

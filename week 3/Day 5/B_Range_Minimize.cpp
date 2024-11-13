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
        vector<long long int>v;
        for(long long int i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
            v.push_back(x);
        }

        vector<long long int>v1=v;
        vector<long long int>v2=v;

        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        v.pop_back();
        v.pop_back();

        long long int max_value1=*max_element(v.begin(),v.end());
        long long int min_value1=*min_element(v.begin(),v.end());

        long long int res1=max_value1-min_value1;

        v1.erase(v1.begin());
        v1.erase(v1.begin());

        long long int max_value2=*max_element(v1.begin(),v1.end());
        long long int min_value2=*min_element(v1.begin(),v1.end());

        long long int res2=max_value2-min_value2;

        v2.pop_back();
        v2.erase(v2.begin());

        long long int max_value3=*max_element(v2.begin(),v2.end());
        long long int min_value3=*min_element(v2.begin(),v2.end());

        long long int res3=max_value3-min_value3;


        if(res1<=res2 && res1<=res3)
        {
            cout<<res1<<endl;
        }
        else if(res2<=res1 && res2<=res3)
        {
            cout<<res2<<endl;
        }
        else if(res3<=res1 && res3<=res2)
        {
            cout<<res3<<endl;
        }
    }
    return 0;
}

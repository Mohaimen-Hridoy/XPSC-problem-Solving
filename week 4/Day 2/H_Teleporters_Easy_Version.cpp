#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--) 
    {
        int n,c;
        cin>>n>>c;
        vector<int>a(n);
        vector<int>cost(n);
        
        for (int i=0;i<n;i++) 
        {
            cin>>a[i];
            cost[i]=a[i]+(i + 1);
        }

        sort(cost.begin(),cost.end()); 

        int count=0;
        for (int i=0;i<n;i++) 
        {
            if (c>=cost[i]) 
            {
                c=c-cost[i];
                count++;
            } 
            else 
            {
                break; 
            }
        }

        cout<<count<<endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin>>t;
    while(t--) 
    {
        long long int a,b,n;
        cin>>a>>b>>n;
        deque<long long int>q;

        for(int i=0;i<n;i++) 
        {
            long long int x;
            cin>>x;
            q.push_back(x);
        }

        sort(q.begin(),q.end()); 

        long long int count=0;

        while(b>0) 
        {
            if(b==1 && !q.empty())
            {
                b=b+q.front();   
                q.pop_front();     
                b=min(b,a);    
            }
            if(b>1) 
            {
                count=count+(b-1);  
                b=1;             
            } 
            else 
            {
                count++;           
                b--;               
            }
        }

        cout<<count<<endl;
    }
    return 0;
}
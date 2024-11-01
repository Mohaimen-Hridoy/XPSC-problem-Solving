#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
        int n;
        cin>>n;
        deque<int> dq(n);
        for (int i=0;i<n;i++) 
        {
            cin>>dq[i];
        }

        int ans1=0,ans2=0,per=1;
        while(!dq.empty()) 
        {
            int left=dq.front(),right=dq.back(),mx;
            mx=max(left, right);

            if(per%2!=0) 
            {
                ans1+=mx;  
            } 
            
            else 
            {
                ans2+=mx;  
            }

            if(mx==left) 
            {
                dq.pop_front();
            }
            else 
            {
                dq.pop_back();
            }
            per++;
        }
        cout<<ans1<<" "<<ans2<<endl;
    

    return 0;
}

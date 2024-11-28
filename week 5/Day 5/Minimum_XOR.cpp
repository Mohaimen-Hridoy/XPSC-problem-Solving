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
        int N;
        cin>>N;
        vector<int>v(N);
        int totalXOR=0;


        for(int i=0;i<N;i++) 
        {
            cin>>v[i];
            totalXOR^=v[i];
        }

        int minXOR=totalXOR;

        for (int i=0;i<N;i++) 
        {
            int currentXOR=totalXOR^v[i];
            minXOR=min(minXOR,currentXOR);
        }

        cout<<minXOR<<endl;
    }

    return 0;
}

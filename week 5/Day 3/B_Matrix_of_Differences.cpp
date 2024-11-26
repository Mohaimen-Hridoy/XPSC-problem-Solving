#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--) 
    {
        int n;
        cin>>n;

        int mx=n*n,mn=1;
        int a[n][n];
 
        for(int i=0;i<n;i++) 
        {
            if(i%2==0) 
            {
                for(int j=0;j<n;j++) 
                {
                    if(j%2==0) 
                    {
                        a[i][j]=mx;
                        mx--;
                    } 
                    else 
                    {
                        a[i][j]=mn;
                        mn++;
                    }
                }
            } 
            else 
            {
                for(int j=n-1;j>=0;j--) 
                {
                    if(j%2==1) 
                    {
                        a[i][j]=mx;
                        mx--;
                    } 
                    else 
                    {
                        a[i][j]=mn;
                        mn++;
                    }
                }
            }
        }

        for(int i=0;i<n;i++) 
        {
            for(int j=0;j<n;j++) 
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

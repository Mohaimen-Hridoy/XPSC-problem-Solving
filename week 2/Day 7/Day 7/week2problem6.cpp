#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        bool flag=true;
        cin>>n;
        string arr,brr;
        cin>>arr>> brr;
 
        for (int i=0;i<n;i++)
        {
            if (arr[i]!=brr[i])
            {
                if (!((arr[i]=='G' && brr[i]=='B') || (arr[i]=='B' && brr[i]=='G')))
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
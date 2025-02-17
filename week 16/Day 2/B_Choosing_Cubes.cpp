#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,f,k,e;
        cin>>n>>f>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            e=arr[f-1];
        }
        
        sort(arr,arr + n,greater<int>());
        int c=-1, d=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==e)
            {
                c=i+1;
                break;
            }
        }
       
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]==e)
            {
                d=i+1;
                break;
            }
        }

        if(c !=-1 && d!=-1)
        {
            if(c<=k && d>k)
            {
                cout<<"MAYBE"<<endl;
            }
            else if(c<=k)
            {
                cout<<"YES"<<endl;
            }
            else if(c>k)
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

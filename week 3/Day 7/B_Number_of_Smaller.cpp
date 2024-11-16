#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin>>a>>b;

    int arr[a];
    int brr[b];

    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<b;i++)
    {
        cin>>brr[i];
    }

    int l=0,r=0,count=0;

    while(r<b)
    {
        if(l<a && arr[l]<brr[r])
        {
            l++,count++;
        }
        else
        {
            cout<<count<<" ";
            r++;
        }
    }
    return 0;
}

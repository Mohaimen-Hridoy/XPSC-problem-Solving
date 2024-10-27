#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int org=n;
    int count=0;
    if(org==0)
    {
        cout<<"0000"<<endl;
    }
    else
    {
    while(n!=0)
    {
        n=n/10;
        count++;
    }

    if(count==4)
    {
        cout<<org<<endl;
    }
    else
    {
        int k=4-count;
        for(int i=0;i<k;i++)
        {
            cout<<0;
        }
        cout<<org<<endl;
    }
    }
    return 0;
}
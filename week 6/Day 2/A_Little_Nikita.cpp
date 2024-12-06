#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int a,b;
    int c;
    cin>>a>>b;
    c=a-b;
    bool flag=true;
    if(a==b)
    {
        flag=false;
    }
    else if(a>b)
    {
        for (int i=a-1,j=1;i>j;i--,j++)
        {
            if(i-j==b)
            {
            flag=false;
            break;
            }
        }
    }
    
    if(flag==true)
    {
        cout<<"No"<<endl;;
    }
    else
    {
        cout<<"Yes"<<endl;
    }
    }
}
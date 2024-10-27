#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int c=a+a-1;
    int d=b+b-1;
    if(a==b)
    {
        cout<<a+b<<endl;
    }
    
    else if(c==d)
    {
        cout<<c<<endl;
    }
    else if(c>d)
    {
        cout<<c<<endl;
    }
    else
    {
        cout<<d<<endl;
    }

    
    return 0;
}
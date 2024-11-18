#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t,a,b,c;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        if(a==1 || ((b<c) && (a-1)<(c-b)+(c-1)) || ((b>c) && (a-1)<(b-1)))
        {
            cout<<"1"<<endl;
        }
        else if(((a-1)>(c-b)+(c-1) && (b<c)) || (b>c) && (a-1)>(b-1))
        {
            cout<<"2"<<endl;
        }
        else if(((b<c) && (a-1)==(c-b) + (c-1)) || (b>c) && (a-1)==(b-1))
        {
            cout<<"3"<<endl;
        }
    }
    return 0;
}


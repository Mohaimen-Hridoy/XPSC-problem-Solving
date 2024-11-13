#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    float a,b,c;
    cin>>a>>b>>c;

    float count1=0,count2=0;

    if(a+b+c==4)
    {
        count1=a*2+b*.5;
        count2=b*.5+c*2;
    }
    else
    {
        count1=a*2+b*.5+(4-(a+b+c))*2;
        count2=c*2+b*.5;
    }

    if(count1>count2)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    
    return 0;
}

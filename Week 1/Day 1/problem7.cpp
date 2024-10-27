
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b;
    cin>>a>>b;
    long long int count=0;
    for(long long int i=0;i<1000;i++)
    {
        for(long long int j=0;j<1000;j++)
        {
            for(long long int k=0;k<1000;k++)
            {
                if(i+j+k<=a && ((i*j)*k)<=b)
                {
                    count++;
                }
            }
        }
    }

    cout<<count<<endl;
    return 0;
}
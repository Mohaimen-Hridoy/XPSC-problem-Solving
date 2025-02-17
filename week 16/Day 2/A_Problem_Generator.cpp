#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int a=0,b=0,c=0,d=0,e=0,f=0,g=0,count=0;
        string S;
        cin>>S;
        int i=0;
        while(S[i]!='\0')
        {
            if(S[i]=='A')
            {
               a++;
            }
            else if(S[i]=='B')
            {
                b++;
            }
            else if(S[i]=='C')
            {
                c++;
            }
            else if(S[i]=='D')
            {
                d++;
            }
            else if(S[i]=='E')
            {
                e++;
            }
            else if(S[i]=='F')
            {
                f++;
            }
            else if(S[i]=='G')
            {
                g++;
            }
            i++;
        }
        if(a<n)
        {
            count=count+(n-a);
        }
        if(b<n)
        {
            count=count+(n-b);
        }
        if(c<n)
        {
            count=count+(n-c);
        }
        if(d<n)
        {
            count=count+(n-d);
        }
        if(e<n)
        {
            count=count+(n-e);
        }
        if(f<n)
        {
            count=count+(n-f);
        }
        if(g<n)
        {
            count=count+(n-g);
        }
        cout<<count<<endl;
    }
}
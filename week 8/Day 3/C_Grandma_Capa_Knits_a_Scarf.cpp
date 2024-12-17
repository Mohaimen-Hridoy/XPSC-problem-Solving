#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin>>t;

    while(t--) 
    {
        int n;
        cin>>n;
        string s; 
        cin>>s;

        int result=n+1; 
        for (char c='a';c<='z';c++) 
        { 
            int i=0,j=n-1,cnt=0; 
            while(i<j) 
            {
                if(s[i]==s[j]) 
                { 
                    i++;
                    j--;
                } 
                else if(s[i]==c) 
                { 
                    i++;
                    cnt++;
                } 
                else if(s[j]==c) 
                { 
                    j--;
                    cnt++;
                } 
                else 
                { 
                    cnt=n+1;
                    break;
                }
            }
            result=min(result, cnt); 
        }

        if(result>n) 
        { 
            cout<<-1<<endl;
        } 
        else 
        {
            cout<<result<<endl;
        }
    }

    return 0;
}
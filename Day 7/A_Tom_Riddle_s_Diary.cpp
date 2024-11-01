#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() 
{
    int n; 
    cin>>n;

    map<string,bool>m; 

    for (int i=0;i<n;i++) 
    {
        string s;
        cin>>s;

        if(m[s]==true) 
        {
            cout<<"YES"<<endl; 
        } 
        else 
        {
            cout<<"NO"<<endl; 
            m[s]=true; 
        }
    }
    return 0;
}

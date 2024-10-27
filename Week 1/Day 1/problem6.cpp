#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin>>S;

    vector<bool>a(26, false);

    for (char c:S) 
    {
        a[c-'a']=true;
    }

    for (int i=0;i<26;i++) 
    {
        if(!a[i]) 
        {
            cout<<char(i+'a')<<endl;
            return 0;
        }
    }

    cout<<"None"<<endl;
    return 0;
}

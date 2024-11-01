#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--) 
    {
        int n;
        cin>>n;
        string b;
        cin>>b;

        set<char>u(b.begin(),b.end());
        string r(u.begin(),u.end());

        map<char,char>sym;
        int m=r.size();
        for (int i=0;i<m;i++) 
        {
            sym[r[i]]=r[m-i-1];
        }

        string s;
        for(char ch:b) 
        {
            s+=sym[ch];
        }

        cout<<s<<endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n,m; 
    cin>>n>>m; 

    map<string,string>ipName; 

    for (int i = 0;i<n;i++) 
    {
        string nm, ip;
        cin>>nm>>ip; 
        ipName[ip]= nm;
    }

    for (int j=0;j<m;j++) 
    {
        string cmd; 
        cin>>ws; 
        getline(cin, cmd); 

        int pos=cmd.find_last_of(" "); 
        string ip=cmd.substr(pos + 1);

        ip=ip.substr(0,ip.size() - 1); 

        cout<<cmd<< " #"<<ipName[ip]<<endl; 
    }

    return 0;
}

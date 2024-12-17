#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

 
    char pattern[]={'a','a','b','b'};

    for(int i=0;i<n;i++) 
    {
        cout<<pattern[i%4]; 
    }
    cout<<endl;
    return 0;
}

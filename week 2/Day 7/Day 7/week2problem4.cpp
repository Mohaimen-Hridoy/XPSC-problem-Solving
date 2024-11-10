#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    string target = "Timur";
    sort(target.begin(), target.end());  
    
    while (t--) 
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        if (n != 5) 
        {
            cout << "NO" << endl;
            continue;
        }
        
        string sorted_s = s;
        sort(sorted_s.begin(), sorted_s.end());  
        
        if (sorted_s == target) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
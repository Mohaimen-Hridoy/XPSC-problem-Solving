#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin>>n;

    map<string,int>db; 

    for (int i=0;i<n;i++) 
    {
        string name; 
        cin>>name;

        if (db[name]==0) 
        { 
            cout << "OK" << endl; 
            db[name] = 1; 
        } 
        else 
        { 
            
            int suffix = db[name]; 
            string newName;

            do {
                newName = name + to_string(suffix);
                suffix++;
            } while (db[newName] > 0); 

            cout << newName << endl; 
            db[newName] = 1;
            db[name] = suffix;
        }
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        vector<string> grid(8);
        for (int i=0;i<8;i++) 
        {
            cin>>grid[i];
        }

        char last_color='B'; 

    
        for (int i=0;i<8;i++) 
        {
            if(grid[i]==string(8,'R')) 
            {
                last_color = 'R';
                break;
            }
        }

        cout<<last_color<<endl;
    }
    return 0;
}
